// It is a simple main memory bus interface, which has been developed by Ali Muhtaroglu
// in support of education for Computer Architecture / Organization courses
// at METU Northern Cyprus Campus.

`include "config.sv"
`include "constants.sv"

module dram_interface (
    input 			                clock, reset,
    input [`DRAM_ADDRESS_SIZE-1:0]  bus_address_to_mem,
    input [`DRAM_WORD_SIZE-1:0]     bus_data_to_mem[`DRAM_BLOCK_SIZE-1:0],
    input 			                bus_read_enable,
    input 			                bus_write_enable,
    output [`DRAM_WORD_SIZE-1:0]    bus_data_from_mem[`DRAM_BLOCK_SIZE-1:0],
    output 			                acknowledge_from_mem
);

   function automatic int log2 (input int n);
      if (n <=1) return 1; // abort function
		log2 = 0;
		while (n > 1) begin
			n = n/2;
			log2++;
      end
//   endfunction;
//   fixed for Quartus as:
     endfunction

   wire [`DRAM_WORD_SIZE-1:0] 	    data_pin;
   logic [`DRAM_WORD_SIZE-1:0] 	    data_from_mem[`DRAM_BLOCK_SIZE-1:0];
   logic [`DRAM_WORD_SIZE-1:0] 	    data_to_mem;
   logic [`DRAM_ADDRESS_SIZE-1:0]   address_to_mem;
   logic [`DRAM_ADDRESS_SIZE-1:0]   address_to_mem_with_word_offset;
   logic 			                we;
   logic                            we_from_mem;
   logic 			                re;
   logic                            re_from_mem;
   logic 			                acknowledge;
   logic [log2(`DRAM_BLOCK_SIZE)-1:0] word_count;
   logic [log2(`DRAM_CYCLE_TIME)-1:0] cycle_count;

	// remove next 2 lines for Quartus
   //`ifdef DRAM_CYCLE_TIME
   //   if(log2(`DRAM_CYCLE_TIME) > 1) begin
	always @(posedge clock)
	   begin
	     if (reset || (!re_from_mem && !we_from_mem))
	       cycle_count <= 'b0;
	     else
	       cycle_count <= cycle_count + 1;
	   end
	// remove next 7 lines for quartus
//		end
//      else begin
//	assign cycle_count = 0;
//      end
//   `else
//      assign cycle_count = 0;
//   `endif

   /* verilator lint_off WIDTH */
	// remove next 2 lines for Quartus
//   `ifdef DRAM_BLOCK_SIZE
//       if(log2(`DRAM_BLOCK_SIZE) > 0) begin
	  always @(posedge clock)
	    begin
	       if (reset || (!re_from_mem && !we_from_mem))
				word_count <= 'b0;
	       else if (cycle_count == 0)
				word_count <= word_count + 1;
		 end
// remove next 7 lines for quartus
//       end // if (log2(`DRAM_BLOCK_SIZE) > 0)
//       else begin
//          assign bus_data_from_mem[0] = data_from_mem[0];
//       end
//    `else
//       assign bus_data_from_mem[0] = data_from_mem[0];
//    `endif

   assign acknowledge_from_mem = acknowledge;
   assign data_pin = (we_from_mem==1) ? data_to_mem :
		     (we_from_mem==0) ? `DRAM_WORD_SIZE'bz : `DRAM_WORD_SIZE'bx;
   assign address_to_mem_with_word_offset = address_to_mem+{word_count,2'b00};

   /* verilator lint_off SYNCASYNCNET */
   always_ff @(posedge clock)
     if (re_from_mem && (cycle_count==`DRAM_CYCLE_TIME-2 || word_count==0))
       data_from_mem[word_count] <= data_pin;

   genvar i;
   generate
// replaced the following for quartus
//      for (i=0; i < `DRAM_BLOCK_SIZE; i++) begin
// with the following line:
	for (i=0; i < `DRAM_BLOCK_SIZE; i++) begin : bus_data_from_mem_generation
			assign bus_data_from_mem[i] = data_from_mem[i];
      end
   endgenerate

   always_ff @(posedge clock)
     if (reset)
       address_to_mem <= `DRAM_ADDRESS_SIZE'b0;
     else if ((bus_read_enable && !we) || bus_write_enable)
//       address_to_mem <= bus_address_to_mem + {word_count,2'b00};
       address_to_mem <= bus_address_to_mem;

   always_ff @(posedge clock)
     if (we_from_mem)
        data_to_mem <= bus_data_to_mem[word_count];
    /* verilator lint_on WIDTH */

   always_ff @(posedge clock or posedge acknowledge or posedge reset)
     if (reset || acknowledge)
       re <= 1'b0;
     else if ((we==0) && bus_read_enable && (word_count==0))
       re <= 1'b1;

   always_ff @(posedge clock or posedge acknowledge or posedge reset)
     if (reset || acknowledge)
       we <= 1'b0;
     else if (bus_write_enable && (word_count==0))
       we <= 1'b1;

  /* verilator lint_on SYNCASYNCNET */

   dram dram (
    .reset             (reset),
    .clock             (clock),
	.address           (address_to_mem_with_word_offset),
	.data              (data_pin),
    .write_enable      (we),
	.read_enable       (re),
	.write_data_enable (we_from_mem),
	.read_data_enable  (re_from_mem),
	.acknowledge       (acknowledge)
   );

endmodule

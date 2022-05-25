// This memory core has been developed by Ali Muhtaroglu for education 
// in support of Computer Architecture / Organization courses at METU 
// Northern Cyprus Campus.

`include "./common/config.sv"
`include "./common/constants.sv"

module dram_array (
		     
		   input [`DRAM_ADDRESS_SIZE-1:0]   address,
		   input 			    clock,
		   inout wire [`DRAM_WORD_SIZE-1:0] data,
		   input 			    wren
);

   logic [7:0] 			  mem[0:2**(`DRAM_ADDRESS_SIZE)-1];
   logic [`DRAM_WORD_SIZE-1:0] 	  din;

   assign din = data;   

   /* verilator lint_off WIDTH */
// removed the following three lines for Quartus and replaced with following 4 lines:
//   genvar i;
//   generate
//      for (i=0; i < `DRAM_WORD_SIZE/8; i++) begin
			assign data[7:0] = (wren==0) ? mem[address] : (wren==1) ? 8'bz : 8'bx;
			assign data[15:8] = (wren==0) ? mem[address+1] : (wren==1) ? 8'bz : 8'bx;
			assign data[23:16] = (wren==0) ? mem[address+2] : (wren==1) ? 8'bz : 8'bx;
			assign data[31:24] = (wren==0) ? mem[address+3] : (wren==1) ? 8'bz : 8'bx;			
			// removed the following two lines for quartus:
//			end
//   endgenerate
   /* verilator lint_on WIDTH */
   
//   assign data = (wren==0) ? mem[address] : (wren==1) ? `DRAM_WORD_SIZE'bz : `DRAM_WORD_SIZE'bx;

     // removed following 3 lines for Quartus
//   genvar j;
//   generate
//      for (j=0; j < `DRAM_WORD_SIZE/8; j++)  begin
			always_ff @(posedge clock)
				if (wren) begin
//					mem[address+j] <= din[(j+1)*8-1:j*8];
               // changed for Quartus as the following 4 lines:
					mem[address] <= din[7:0];
				   mem[address+1] <= din[15:8];
				   mem[address+2] <= din[23:16];
				   mem[address+3] <= din[31:24];	
				end
	// removed following 2 lines for Quartus
	//	end
   // endgenerate
   /* verilator lint_on WIDTH */

`ifdef DRAM_HEX
   initial $readmemh(`DRAM_HEX, mem);
`endif

endmodule


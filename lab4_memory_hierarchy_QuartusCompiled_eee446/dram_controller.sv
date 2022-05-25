// This is a DRAM controller / interface that supports non-blocking requests
// in parallel from Instruction and Data Caches 
// It is developed by Ali Muhtaroglu in support of education for Computer 
// Architecture / Organization courses at METU Northern Cyprus Campus.

`include "./common/config.sv"
`include "./common/constants.sv"

module dram_controller(input  clock, reset,
		       
		       input 			       dram_port1_request,
		       input [`DRAM_ADDRESS_SIZE-1:0]  dram_port1_address,
		       input 			       dram_port1_we,
		       output [`DRAM_WORD_SIZE-1:0]    dram_port1_read_data[`DRAM_BLOCK_SIZE-1:0],
		       input [`DRAM_WORD_SIZE-1:0]     dram_port1_write_data[`DRAM_BLOCK_SIZE-1:0],
		       output 			       dram_port1_acknowledge,
		       
		       input 			       dram_port2_request,
		       input [`DRAM_ADDRESS_SIZE-1:0]  dram_port2_address,
		       input 			       dram_port2_we,
		       output [`DRAM_WORD_SIZE-1:0]    dram_port2_read_data[`DRAM_BLOCK_SIZE-1:0],
		       input [`DRAM_WORD_SIZE-1:0]     dram_port2_write_data[`DRAM_BLOCK_SIZE-1:0],
		       output 			       dram_port2_acknowledge,

		       output                          dram_busy
		      );

    // dram access in progress - these signals can be used to stall CPU during cache misses
    logic 			    dram_port1_busy;
    logic 			    dram_port2_busy;
 
    // dram is busy if either port 1 or port 2 is busy
    assign dram_busy = dram_port1_busy || dram_port2_busy;
 			     
    /* verilator lint_off SYNCASYNCNET */
	 // following line replaced for quartus
   always_ff @(posedge(clock) or posedge dram_port1_request) begin
	 // with:
//	 always_ff @(posedge(clock)) begin
      if (dram_port1_request)
	 dram_port1_busy <= 1'b1;
      else if (reset || (dram_port1_busy && dram_port1_acknowledge))
         dram_port1_busy <= 1'b0;  //reset port1 busy state
      else
         dram_port1_busy <= dram_port1_busy & !dram_port1_acknowledge;
    end
	 // following line replaced for quartus
    always_ff @(posedge(clock) or posedge dram_port2_request) begin
	 // with:
//	 always_ff @(posedge(clock)) begin
       if (dram_port2_request)
	 dram_port2_busy <= 1'b1;
       else if (reset || (dram_port2_busy && dram_port2_acknowledge))
         dram_port2_busy <= 1'b0;  //reset port2 busy state
       else
         dram_port2_busy <= dram_port2_busy & !dram_port2_acknowledge;
    end
    /* verilator lint_on SYNCASYNCNET */

    // dram interface / memory controller for I-CACHE
    dram_interface dram_interface_icache (
        .clock                      (clock),
        .reset                      (reset),
	.bus_read_enable            (!dram_port1_we && dram_port1_busy),
	.bus_write_enable           (dram_port1_we && dram_port1_busy),	   
        .bus_address_to_mem         (dram_port1_address),
        .bus_data_to_mem            (dram_port1_write_data),
        .bus_data_from_mem          (dram_port1_read_data),
        .acknowledge_from_mem       (dram_port1_acknowledge)
    );
   
    // dram interface / memory controller for D-CACHE
    dram_interface dram_interface_dcache (
        .clock                      (clock),
        .reset                      (reset),
	.bus_read_enable            (!dram_port2_we && dram_port2_busy),
	.bus_write_enable           (dram_port2_we && dram_port2_busy),	   
        .bus_address_to_mem         (dram_port2_address),
        .bus_data_to_mem            (dram_port2_write_data),
        .bus_data_from_mem          (dram_port2_read_data),
        .acknowledge_from_mem       (dram_port2_acknowledge)
    );

endmodule

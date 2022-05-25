// This is a simple direct-mapped instruction cache controller fsm, developed by 
// Ali Muhtaroglu in support of education for Computer Architecture / Organization 
// courses at METU Northern Cyprus Campus.

`include "./common/config.sv"
`include "./common/constants.sv"

module icache_controller (input  clock, reset,
			  input [`DRAM_ADDRESS_SIZE-1:0]  icache_address, // cpu request address (CPU->cache)
			  input 			  icache_valid, // cpu request valid (CPU->cache)
			  input [`DRAM_WORD_SIZE-1:0] 	  mem_data_in[`DRAM_BLOCK_SIZE-1:0], // memory read data (memory->cache)
			  input 			  mem_ready, // memory read data ready (memory->cache)    
			  output [`DRAM_ADDRESS_SIZE-1:0] mem_address, // cache request address (cache->memory)
			  output 			  mem_valid, // request to memory valid (cache->memory)
			  output [`DRAM_WORD_SIZE-1:0] 	  icache_data_out, // data to CPU (cache->CPU)
			  output 			  icache_data_ready // data to CPU ready (cache->CPU)
			  );

   // log2 function quite useful for parametric design
   function automatic int log2 (input int n);
      if (n <=1) return 1; // abort function
      log2 = 0;
      while (n > 1) begin
	 n = n/2;
	 log2++;
      end
// changed the following line for quartus:
//   endfunction; // log2
	//into:
	endfunction

   // one-hot state assignment, and definition of next state and current state variables
   enum logic [1:0] {compare_tag=2'b01, allocate=2'b10} nstate, cstate;

   // interface signals to tag memory
   logic 	             icache_valid_read;
   logic [`ITAGMSB:`ITAGLSB] icache_tag_read; 
   logic                     icache_valid_write;
   logic [`ITAGMSB:`ITAGLSB] icache_tag_write;   
   logic [`ICACHE_INDEX-1:0] icache_tag_index;
   logic 		     icache_tag_we;		     
   
   // interface signals to cache sram memory
   logic [`DRAM_WORD_SIZE-1:0] icache_sram_read[`DRAM_BLOCK_SIZE-1:0];
   logic [`DRAM_WORD_SIZE-1:0] icache_sram_write[`DRAM_BLOCK_SIZE-1:0];
   logic [`ICACHE_INDEX-1:0]   icache_sram_index;
   logic                       icache_sram_we;
   
   // temporary variables for cache controller output to CPU
   logic [`DRAM_WORD_SIZE-1:0]   icache_data_to_cpu;
   logic                         icache_data_to_cpu_ready;			 
   
   // temporary variables for memory requests
   logic [`DRAM_ADDRESS_SIZE-1:0] mem_request_address;
   logic [`DRAM_WORD_SIZE-1:0]    mem_request_data[`DRAM_BLOCK_SIZE-1:0];
   logic                          mem_request_valid;
   logic                          synchronized_reset;

   assign mem_address = mem_request_address;
   assign mem_valid = mem_request_valid;  
   assign icache_data_out = icache_data_to_cpu;
   assign icache_data_ready = icache_data_to_cpu_ready;

   always_ff @(posedge(clock)) begin
      if (reset) 
	synchronized_reset <= 1'b1;
      else 
	synchronized_reset <= 1'b0;
   end
   
   always_comb begin
   
   // default settings for all signals
      nstate = cstate;
      icache_data_to_cpu = '{default:0};
      icache_data_to_cpu_ready = '0;
      icache_valid_write = '0;
      icache_tag_write = '{default:0};
      mem_request_valid = synchronized_reset; 
      icache_tag_we = '0;   

      // direct mapped cache index for cache tag memory and cache sram portion
      icache_tag_index = icache_address[log2(`DRAM_BLOCK_SIZE)+1+`ICACHE_INDEX:log2(`DRAM_BLOCK_SIZE)+2];
      icache_sram_index = icache_address[log2(`DRAM_BLOCK_SIZE)+1+`ICACHE_INDEX:log2(`DRAM_BLOCK_SIZE)+2];
      
      // default is reading cache line
      icache_sram_we = '0;
      
      // access only the correct word of the cache sram block when reading
      icache_data_to_cpu = icache_sram_read[icache_address[log2(`DRAM_BLOCK_SIZE)+1:2]];

      // main memory request address is a copy of cpu request address to cache
      mem_request_address = icache_address;

      // Cache FSM with three states:
      
      case(cstate)
	// compare tag state
	compare_tag : begin
	   /*If there is a CPU request, then compare cache tag*/
           /*cache hit (tag match and cache entry is valid)*/
	   if (icache_valid && (icache_address[`ITAGMSB:`ITAGLSB] == icache_tag_read) && icache_valid_read) begin
              icache_data_to_cpu_ready = '1;
              /*ﬁnished*/
              nstate = compare_tag; 
	   end 
	   /*cache miss*/
	   else if (icache_valid) begin 
              /*generate new tag*/
              icache_tag_we = '1; 
              icache_valid_write = '1;
              /*new tag*/
              icache_tag_write = icache_address[`ITAGMSB:`ITAGLSB];
              /*generate memory request on miss*/
              mem_request_valid = '1; 
	      /*wait till a new block is allocated*/
	      nstate = allocate;
	   end 
	end
	// state for allocating a new cache line before proceeding
	allocate: begin       
	   /*memory controller has responded*/
	   if (mem_ready) begin
              /*re-compare tag for write miss (need modify correct word)*/
              nstate = compare_tag; 
              icache_sram_write = mem_data_in;
              /*update cache line data*/
              icache_sram_we = '1;  
	   end 
	end
	default: nstate = cstate;
      endcase
   end
   always_ff @(posedge(clock)) begin
      if (reset) 
	cstate <= compare_tag;  //reset to compare tag state
      else 
	cstate <= nstate;
   end

   // instruction cache tag ram and sram instantiations:

   inst_cache_tag inst_cache_tag (
        .clock        (clock),
	.we           (icache_tag_we),
        .index        (icache_tag_index),
	.valid_in     (icache_valid_write),
	.tag_in       (icache_tag_write),
	.valid_out    (icache_valid_read),
	.tag_out      (icache_tag_read)
   );

   inst_cache_sram inst_cache_sram (
        .clock        (clock),
	.we           (icache_sram_we),
        .index        (icache_sram_index),
	.data_write   (icache_sram_write),
        .data_read    (icache_sram_read)
   );
   
endmodule

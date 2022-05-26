// Memory Top Level Unit

`include "config.sv"
`include "constants.sv"

module memory(input  clock, reset,
    //Instruction Side
    input [`DRAM_ADDRESS_SIZE-1:0]  icache_PC, // cpu request address (CPU->cache)
    input 			                icache_instrRequest, // cpu request valid (CPU->cache)
    output [`DRAM_WORD_SIZE-1:0] 	icache_instruction, // data to CPU (cache->CPU)
    output 			                icache_instrReady, // data to CPU ready (cache->CPU)

    //Data Side
    input [`DRAM_ADDRESS_SIZE-1:0]  dcache_address, // cpu request address (CPU->cache)
    input 			                dcache_dataRequest, // cpu request valid (CPU->cache)
    input 			                dcache_rw, // cpu R/W request (CPU->cache)
    input [`DRAM_WORD_SIZE-1:0] 	dcache_writeData, // cpu request data (CPU->cache)
    input [`DRAM_WORD_SIZE/8-1:0]   dcache_byte_en, // cpu request byte enable (CPU->cache)
    output [`DRAM_WORD_SIZE-1:0] 	dcache_readData, // data to CPU (cache->CPU)
    output 			                dcache_data_ready // data to CPU ready (cache->CPU)
    );

    logic mem_ready_icache;
    logic zeros;

    assign zeros = 1'b0;

icache_controller icache_controller (
    .clock                  (clock),
    .reset                  (reset),
    .icache_address         (icache_PC), // cpu request address (CPU->cache)
    .icache_valid           (icache_instrRequest), // cpu request valid (CPU->cache)
    .icache_data_out        (icache_instruction), // data to CPU (cache->CPU)
    .icache_data_ready      (icache_instrReady),// data to CPU ready (cache->CPU)

    .mem_data_in            (icache_instructionBlock), // memory read data (memory->cache)
    .mem_ready              (icache_blockReady), // memory read data ready (memory->cache)

    .mem_address            (icache_blockAddress), // cache request address (cache->memory)
    .mem_valid              (icache_blockRequest) // request to memory valid (cache->memory)

    );


dcache_controller dcache_controller (
    .clock              (clock),
    .reset              (reset),
    .dcache_address     (dcache_address), // cpu request address (CPU->cache)
    .dcache_data_in     (dcache_writeData), // cpu request data (CPU->cache)
    .dcache_byte_en     (dcache_byte_en), // cpu request byte enable (CPU->cache)
    .dcache_rw          (dcache_rw), // cpu R/W request (CPU->cache)
    .dcache_valid       (dcache_dataRequest), // cpu request valid (CPU->cache)

    .dcache_data_out    (dcache_readData), // data to CPU (cache->CPU)
    .dcache_data_ready  (dcache_data_ready),// data to CPU ready (cache->CPU)

    .mem_data_in        (dcache_readBlock), // memory read data (memory->cache)
    .mem_ready          (dcache_blockReady), // memory read data ready (memory->cache)

    .mem_address        (dcache_blockAddress), // cache request address (cache->memory)
    .mem_data_out       (dcache_wbBlock), // memory write data (cache->memory)
    .mem_rw             (dcache_mem_rw), // R/W request to memory (cache->memory)
    .mem_valid          (dcache_blockRequest) // request to memory valid (cache->memory)
    );


logic icache_blockRequest, icache_blockReady;
logic [`DRAM_ADDRESS_SIZE-1:0] icache_blockAddress;
logic [`DRAM_WORD_SIZE-1:0]     icache_instructionBlock [`DRAM_BLOCK_SIZE-1:0];

logic dcache_blockRequest, dcache_blockReady, dcache_mem_rw;
logic [`DRAM_ADDRESS_SIZE-1:0] dcache_blockAddress;
logic [`DRAM_WORD_SIZE-1:0]     dcache_readBlock [`DRAM_BLOCK_SIZE-1:0];
logic [`DRAM_WORD_SIZE-1:0]     dcache_wbBlock [`DRAM_BLOCK_SIZE-1:0];
logic transfer_in_progress;

/* verilator lint_off PINMISSING */
dram_controller dram_controller(
    .clock                      (clock),
    .reset                      (reset),

    .dram_port1_request         (icache_blockRequest),
    .dram_port1_address         (icache_blockAddress),
    .dram_port1_read_data       (icache_instructionBlock),
    .dram_port1_acknowledge     (icache_blockReady),
    .dram_port1_we              (zeros),

    .dram_port2_address         (dcache_blockAddress),
    .dram_port2_request         (dcache_blockRequest),
    .dram_port2_read_data       (dcache_readBlock),
    .dram_port2_write_data      (dcache_wbBlock),
    .dram_port2_acknowledge     (dcache_blockReady),
    .dram_port2_we              (dcache_mem_rw),

    .dram_busy                  (transfer_in_progress)
	);
/* verilator lint_on PINMISSING */
endmodule

`include "config.sv"
`include "constants.sv"

module top (
    input logic 		clock,
    input logic 		reset,
    output logic [7:0]  Op
);

	logic [3:0] MemRead;
	logic [3:0] MemWrite;
    logic PCSrc;
	logic [1:0] MemToReg;
	logic RegWrite;
	logic [3:0] ALUOp;
	logic [1:0] ALUSrc;
    logic ALUOp2;
    logic RbSelect;
    logic MemSignExtend;
    logic [1:0] branch_flag;
    logic jump_flag;
    logic double_jump_flag;


    logic [`DRAM_ADDRESS_SIZE-1:0]  icache_PC;
    logic 			                icache_instrRequest;
    logic [`DRAM_WORD_SIZE-1:0] 	icache_instruction;
    logic 			                icache_instrReady;

    //Data Side
    logic [`DRAM_ADDRESS_SIZE-1:0]  dcache_address;
    logic 			                dcache_dataRequest;
    logic 			                dcache_rw;
    logic [`DRAM_WORD_SIZE-1:0] 	dcache_writeData;
    logic [`DRAM_WORD_SIZE/8-1:0]   dcache_byte_en;
    logic [`DRAM_WORD_SIZE-1:0] 	dcache_readData;
    logic 			                dcache_data_ready;
    logic                           transfer_in_progress;

control ctr(
    .Op         (Op),
    .AluSrc     (ALUSrc),
    .AluOp      (ALUOp),
    .PCSrc      (PCSrc),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .AluOp2     (ALUOp2),
    .RbSelect   (RbSelect),
    .MemSignExtend  (MemSignExtend),
    .branch_flag    (branch_flag),
    .jump_flag      (jump_flag),
    .double_jump_flag  (double_jump_flag)
);



datapath datapath(
    .clk        (clock),
    .reset      (reset),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .branch_flag    (branch_flag),
    .jump_flag      (jump_flag),
    .MemSignExtend  (MemSignExtend),
    .PCSrc      (PCSrc),
    .ALUSrc     (ALUSrc),
    .ALUOp      (ALUOp),
    .ALUOp2     (ALUOp2),
    .RbSelect   (RbSelect),
    .Op         (Op),
    .double_jump_flag  (double_jump_flag),

    //Instruction Side
    .icache_PC              (icache_PC),
    .icache_instrRequest    (icache_instrRequest),
    .icache_instruction     (icache_instruction),
    .icache_instrReady      (icache_instrReady),

    //Data Side
    .dcache_address         (dcache_address),
    .dcache_dataRequest     (dcache_dataRequest),
    .dcache_rw              (dcache_rw ),
    .dcache_writeData       (dcache_writeData),
    .dcache_byte_en         (dcache_byte_en),
    .dcache_readData        (dcache_readData),
    .dcache_data_ready      (dcache_data_ready),

    .transfer_in_progress   (transfer_in_progress)
);

memory memory(
    .clock                  (clock),
    .reset                  (reset),

    //Instruction Side
    .icache_PC              (icache_PC), // cpu request address (CPU->cache)
    .icache_instrRequest    (icache_instrRequest), // cpu request valid (CPU->cache)
    .icache_instruction     (icache_instruction), // data to CPU (cache->CPU)
    .icache_instrReady      (icache_instrReady), // data to CPU ready (cache->CPU)

    //Data Side
    .dcache_address         (dcache_address), // cpu request address (CPU->cache)
    .dcache_dataRequest     (dcache_dataRequest), // cpu request valid (CPU->cache)
    .dcache_rw              (dcache_rw ), // cpu R/W request (CPU->cache)
    .dcache_writeData       (dcache_writeData), // cpu request data (CPU->cache)
    .dcache_byte_en         (dcache_byte_en), // cpu request byte enable (CPU->cache)
    .dcache_readData        (dcache_readData), // data to CPU (cache->CPU)
    .dcache_data_ready      (dcache_data_ready), // data to CPU ready (cache->CPU)
    .transfer_in_progress   (transfer_in_progress)
    );
endmodule

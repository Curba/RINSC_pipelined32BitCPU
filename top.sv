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
    .branch_flag    (branch_flag)
);



datapath datapath(
    .clk        (clock),
    .reset      (reset),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .branch_flag    (branch_flag),
    .MemSignExtend  (MemSignExtend),
    .PCSrc      (PCSrc),
    .ALUSrc     (ALUSrc),
    .ALUOp      (ALUOp),
    .ALUOp2     (ALUOp2),
    .RbSelect   (RbSelect),
    .Op         (Op)
);

endmodule



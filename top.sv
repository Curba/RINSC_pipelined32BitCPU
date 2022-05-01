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
    .MemSignExtend  (MemSignExtend)
);



datapath datapath(
    .clk        (clock),
    .reset      (reset),
    .MemRead    (MemRead),
    .MemWrite   (MemWrite),
    .MemToReg   (MemToReg),
    .RegWrite   (RegWrite),
    .MemSignExtend  (MemSignExtend),
    .PCSrc      (PCSrc),
    .ALUSrc     (ALUSrc),
    .ALUOp      (ALUOp),
    .ALUOp2     (ALUOp2),
    .RbSelect   (RbSelect),
    .Op         (Op)
);

endmodule



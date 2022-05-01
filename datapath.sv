module datapath(input logic clk, reset, MemRead, MemWrite,
                input logic [1:0] MemToReg,
                 input logic RegWrite, PCSrc,
				input logic [3:0] ALUOp,
                input logic [1:0] ALUSrc,
                input logic RbSelect,
                input logic ALUOp2,
				output logic [7:0] Op);


	logic [6:0]PC;
	logic [6:0] PCSTART; //starting address of instruction memory
	assign PCSTART = 0;

	// Instruction memory internal storage, input address and output data bus signals
	logic [7:0] instmem [127:0];
	logic [6:0] instmem_address;
    logic [31:0] instmem_data;

	// Data memory internal storage, input address and output data bus signals
	logic [7:0] datamem [127:0];
	logic [6:0] datamem_address;
    logic [31:0] datamem_data;
    logic [31:0] datamem_write_data;

    //Forwarding Parameters
    logic [1:0] ForwardingA;
	logic [1:0] ForwardingB;
    logic stall_flag;
    logic PCenable;
    logic IfIdEN;

    always_comb  begin// data hazard detection and forward , control hazard detection and flush
		if((IdEx.MemRead)&&((IdEx.rd == IfId.instruction[26:22])||(IdEx.rd == (RbSelect ? IfId.instruction[31:27]:IfId.instruction[21:17]))))
			begin // Stall If IfId Rs and IdEx is the same or IdEx Rt IfId rt is same, set control bits to 0
			stall_flag = 1;
			PCenable = 0;
			IfIdEN = 0;
			end
		else begin
			stall_flag = 0;
			PCenable = 1;
			IfIdEN = 1;
			end

        end
	// IF/ID Pipeline staging register fields can be represented using structure format of System Verilog
	// You may refer to the first field in the structure as IfId.instruction for example
	struct packed{
		logic [31:0] instruction;
		logic [6:0] PCincremented;
	} IfId;

	always @ (posedge clk) begin
        if(IfIdEN)begin
		IfId.instruction <= instmem_data[31:0];
		IfId.PCincremented <= PC+6'b100;
        end
	end

	//decode
	logic [18:0] JumpAddress;

	assign Op = IfId.instruction[7:0];
	assign JumpAddress = IfId.instruction [26:8];

	// Register File description
	logic [31:0] RF[31:0];
	logic [31:0] da;            //Read Ra
	logic [31:0] db;            //Read Rb
	logic [31:0] dc;            //Read Rb
	logic [31:0] RF_WriteData;  //Write data
	logic [31:0] RF_WriteAddr;  //Write address

	// Register Logic
	assign da = RF[IfId.instruction[26:22]] ;
	assign db = (RbSelect)? RF[IfId.instruction[31:27]]:RF[IfId.instruction[21:17]] ;
    assign dc = RF[IfId.instruction[16:12]];

    always_comb
        case(MemWb.MemToReg)
            2'b00: RF_WriteData = MemWb.datamem_data;
            2'b01: RF_WriteData = MemWb.Alu2out;
            2'b10: RF_WriteData = {{(25){1'b0}},MemWb.PCincremented};
            default: RF_WriteData = MemWb.datamem_data;
         endcase

	assign RF_WriteAddr = {{(27){1'b0}},MemWb.rd};

	always @(negedge clk) begin
		if (MemWb.RegWrite) begin
			RF[RF_WriteAddr] <= RF_WriteData;
		end
	end

	struct packed{
        logic [4:0] ra;
        logic [4:0] rb;
		logic [1:0] ALUSrc;
	    logic [3:0] ALUOp;
	    logic ALUOp2;
		logic [1:0]MemToReg;
		logic MemRead;
		logic MemWrite;
		logic RegWrite;
		logic [6:0] PCincremented;
		logic [31:0] da;
		logic [31:0] db;
		logic [31:0] dc;
		logic [31:0] signextend;
		logic [4:0] rd;
		logic [8:0] shamt;
	} IdEx;

	always @ (posedge clk) begin
        if(stall_flag)begin
            IdEx.ALUSrc <= 0;
            IdEx.ALUOp <= 0;
            IdEx.ALUOp2 <= 0;
            IdEx.MemRead <= 0;
            IdEx.MemWrite <= 0;
            IdEx.MemToReg <= 0;
            IdEx.RegWrite <= 0;
            end
		IdEx.ALUSrc <= ALUSrc;
		IdEx.ALUOp <= ALUOp;
		IdEx.ALUOp2 <= ALUOp2;
		IdEx.MemRead <= MemRead;
		IdEx.MemWrite <= MemWrite;
		IdEx.MemToReg <= MemToReg;
		IdEx.RegWrite <= RegWrite;
		IdEx.PCincremented <= IfId.PCincremented;
		IdEx.da	<= da;
		IdEx.db	<= db;
		IdEx.dc	<= dc;
		IdEx.shamt <= IfId.instruction[16:8];
		IdEx.rd <= IfId.instruction[31:27];
		IdEx.signextend <= { {(18){IfId.instruction [21]}},IfId.instruction [21:8] };
        IdEx.ra <= IfId.instruction[26:22];
        IdEx.rb <= (RbSelect) ? IfId.instruction[31:27]:IfId.instruction[21:17];
	end

	// Execute Stage Variables
	logic [31:0] alu1in_a;
	logic [31:0] alu1in_b;
	logic [31:0] alu1in_b_mux;
	logic [31:0] Alu1out;


    always_comb begin
        if ((ExMem.RegWrite)&&(ExMem.rd !=0) && ExMem.rd == IdEx.ra)
            ForwardingA = 2'b10;
        else if (MemWb.RegWrite && MemWb.rd !=0 && ExMem.rd != IdEx.ra && MemWb.rd == IdEx.ra)
            ForwardingA = 2'b01;
        else
            ForwardingA = 2'b00;

        if((ExMem.RegWrite)&&(ExMem.rd !=0) && ExMem.rd == IdEx.rb)
            ForwardingB = 2'b10;
        else if (MemWb.RegWrite && MemWb.rd !=0 && ExMem.rd != IdEx.rb && MemWb.rd == IdEx.rb)
            ForwardingB = 2'b01;
        else
            ForwardingB = 2'b00;

        case(ForwardingA)
            2'b00: alu1in_a = IdEx.da; // If there is no forwarding Alu input1 from IdEx.da
            2'b01: alu1in_a = RF_WriteData;
            2'b10:  alu1in_a = ExMem.Alu1out; // If forwarding logic set to 10, corresponding data at ExMem register
            default: alu1in_a = ExMem.Alu1out;
    	endcase

        case(ForwardingB)
            2'b00: alu1in_b = alu1in_b_mux;
            2'b01: alu1in_b = RF_WriteData;
            2'b10: alu1in_b = ExMem.Alu1out;
            default: alu1in_b = ExMem.Alu1out;
        endcase
    end

	always_comb begin
		case(IdEx.ALUSrc)
			2'b00: alu1in_b_mux = IdEx.db;
			2'b01: alu1in_b_mux = IdEx.signextend;
			2'b10: alu1in_b_mux = {{(23){1'b1}},IdEx.shamt};
			default: alu1in_b_mux = IdEx.db; endcase
	end

	always_comb begin
		case(IdEx.ALUOp)
			4'b0000: Alu1out = alu1in_a + alu1in_b;
			4'b0001: Alu1out = alu1in_a - alu1in_b;
			4'b0010: Alu1out = alu1in_a * alu1in_b;
			4'b0011: Alu1out = alu1in_a ^ alu1in_b;
			4'b0100: Alu1out = alu1in_a | alu1in_b;
			4'b0101: Alu1out = alu1in_a & alu1in_b;
			4'b0110: Alu1out = alu1in_a << alu1in_b;
			4'b0111: Alu1out = alu1in_a >>> alu1in_b;
			4'b1000: Alu1out = alu1in_a >> alu1in_b;
			default: Alu1out = alu1in_a + alu1in_b;
		endcase
	end

	struct packed{
		logic [6:0] PCincremented;
		logic MemRead;
		logic MemWrite;
		logic RegWrite;
        logic ALUOp2;
		logic [1:0] MemToReg;
		logic [31:0] Alu1out;
		logic [31:0] db;
		logic [31:0] dc;
		logic [4:0] rd;
	} ExMem;

	// Ex Mem Stage
	always @ (posedge clk) begin
        ExMem.PCincremented <= IdEx.PCincremented;
		ExMem.MemRead <= IdEx.MemRead;
		ExMem.MemWrite <= IdEx.MemWrite;
		ExMem.RegWrite <= IdEx.RegWrite;
		ExMem.MemToReg <= IdEx.MemToReg;
		ExMem.Alu1out <= Alu1out;
        ExMem.ALUOp2 <= IdEx.ALUOp2;
		ExMem.db <= IdEx.db;
		ExMem.dc <= IdEx.dc;
		ExMem.rd <= IdEx.rd;
	end

	logic [31:0] alu2in_a;
	logic [31:0] alu2in_b;
	logic [31:0] Alu2out;

    assign alu2in_a = ExMem.Alu1out;
    assign alu2in_b = ExMem.dc;

	always_comb begin
		case(ExMem.ALUOp2)
			1'b0: Alu2out = alu2in_a;
			1'b1: Alu2out = alu2in_a + alu2in_b;
		endcase
	end
	//memwb
	struct packed{
	    //control signals
		logic [6:0] PCincremented;
		logic RegWrite;
		logic [1:0]MemToReg;
		logic [31:0] datamem_data;
		logic [31:0] Alu2out;
		logic [4:0] rd;
	} MemWb;

	//ex/mem
	always @ (posedge clk) begin
        MemWb.PCincremented <= ExMem.PCincremented;
		MemWb.RegWrite <= ExMem.RegWrite;
		MemWb.MemToReg <= ExMem.MemToReg;
		MemWb.datamem_data <= datamem_data;
		MemWb.Alu2out <= Alu2out;
		MemWb.rd <= ExMem.rd;

	end



	// ... may have other declarations

	// initialize instruction and data memory arrays
	// this will read the .dat file in the same directory
	// and initialize the memory accordingly.
	initial
		$readmemh("instruction_memory.dat", instmem);
	initial
		$readmemh("data_memory.dat", datamem);

	// Instruction Memory Address
	assign instmem_address = PC;

	// Instruction Memory Read Logic
	assign instmem_data[31:24] = instmem[instmem_address];
	assign instmem_data[23:16] = instmem[instmem_address+7'b1];
	assign instmem_data[15:8] = instmem[instmem_address+7'b10];
	assign instmem_data[7:0] = instmem[instmem_address+7'b11];

	// Data	Memory Address
	assign datamem_address = ExMem.Alu1out[6:0];
    assign datamem_write_data = ExMem.db;

	// Data Memory Write Logic
	always @(posedge clk) begin
		if (ExMem.MemWrite) begin
			datamem[datamem_address] <= datamem_write_data[31:24];
			datamem[datamem_address+1] <= datamem_write_data[23:16];
			datamem[datamem_address+2] <= datamem_write_data[15:8];
			datamem[datamem_address+3] <= datamem_write_data[7:0];
            $writememh("data_memory.dat", datamem);
		end
	end

	// Data Memory Read Logic
	assign datamem_data[31:24] = (ExMem.MemRead)? datamem[datamem_address]:8'bx;
	assign datamem_data[23:16] = (ExMem.MemRead)? datamem[datamem_address+1]:8'bx;
	assign datamem_data[15:8] = (ExMem.MemRead)? datamem[datamem_address+2]:8'bx;
	assign datamem_data[7:0] = (ExMem.MemRead)? datamem[datamem_address+3]:8'bx;

	//PC logic

	always@ (posedge clk)begin
		if(reset)
			PC <= PCSTART;
        else if(PCenable)
		    PC <= (PCSrc) ? JumpAddress[6:0]:PC+7'b100;
    end
endmodule

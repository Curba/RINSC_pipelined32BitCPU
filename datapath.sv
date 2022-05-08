module datapath(input logic clk, reset,
                input logic [3:0] MemWrite,
                input logic [1:0] MemToReg,
                input jump_flag,
                 input logic RegWrite, PCSrc, MemSignExtend,
                 input logic [1:0] branch_flag,
                 input logic [3:0] MemRead,
				input logic [3:0] ALUOp,
                input logic [1:0] ALUSrc,
                input logic RbSelect,
                input logic ALUOp2,
				input logic double_jump_flag,
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
    logic  ForwardingC;
	logic ForwardingD;
    logic stall_flag;
    logic PCenable;
    logic IfIdEN;
    logic flush;

    logic [1:0]branchId;
    logic [1:0] branchex;
    assign  branchId = IdEx.branch_flag;
    assign  branchex = ExMem.branch_flag;

    always_comb  begin// data hazard detection and forward , control hazard detection and flush
		if((IdEx.MemRead != 4'b0000)&&((IdEx.rd == IfId.instruction[26:22])
            ||(IdEx.rd == (RbSelect ? IfId.instruction[31:27]:IfId.instruction[21:17]))))
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

        if(jump_flag != 0 || branch_flag != 0 || IdEx.branch_flag != 0 || ExMem.branch_flag != 0)begin
            flush = 1;
            PCenable = (jump_flag != 0 || branch_src != 0) ? 1:0;
            end
        else begin
            PCenable = 1;
			//IfIdEN = 1;
            flush = 0;
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
		IfId.instruction <= (flush) ? 0:instmem_data[31:0];
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
	logic double_jump;

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
        logic [4:0] rc;
		logic [1:0] ALUSrc;
	    logic [3:0] ALUOp;
	    logic ALUOp2;
        logic MemSignExtend;
		logic [1:0]MemToReg;
		logic [3:0] MemRead;
		logic [3:0] MemWrite;
		logic RegWrite;
		logic [6:0] PCincremented;
		logic [31:0] da;
		logic [31:0] db;
		logic [31:0] dc;
		logic [31:0] signextend;
		logic [4:0] rd;
		logic [4:0] shamt;
        logic [1:0] branch_flag;
        logic [13:0] branch_addr;
		logic RbSelect;
		logic double_jump_flag;
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
            IdEx.MemSignExtend <= 0;
            IdEx.branch_flag <= 0;
			IdEx.RbSelect <= 0;
			IdEx.double_jump_flag <= 0;
        end
        IdEx.MemSignExtend <= MemSignExtend;
		IdEx.ALUSrc <= ALUSrc;
		IdEx.ALUOp <= ALUOp;
		IdEx.ALUOp2 <= ALUOp2;
		IdEx.MemRead <= MemRead;
		IdEx.MemWrite <= MemWrite;
		IdEx.MemToReg <= MemToReg;
		IdEx.RegWrite <= RegWrite;
		IdEx.PCincremented <= IfId.PCincremented;
        IdEx.branch_addr <= IfId.instruction [21:8];
        IdEx.branch_flag <= branch_flag;
		IdEx.da	<= da;
		IdEx.db	<= db;
		IdEx.dc	<= dc;
		IdEx.shamt <= IfId.instruction[16:12];
		IdEx.rd <= IfId.instruction[31:27];
		IdEx.signextend <= { {(18){IfId.instruction [21]}},IfId.instruction [21:8] };
        IdEx.ra <= IfId.instruction[26:22];
        IdEx.rb <= (RbSelect) ? IfId.instruction[31:27]:IfId.instruction[21:17];
        IdEx.rc <= IfId.instruction[16:12];
		IdEx.RbSelect <= RbSelect;
		IdEx.double_jump_flag <= double_jump_flag;
	end

	// Execute Stage Variables
	logic [31:0] alu1in_a;
	logic [31:0] alu1in_b;
	logic [31:0] alu1in_b_mux;
	logic [31:0] Alu1out;
    logic zero_flag;

	logic [4:0]exmemrd;
	logic [4:0]idexra;
	logic [4:0]idexrb;
	logic [1:0]exmembranchflag;
	assign exmemrd = ExMem.rd;
	assign idexra=IdEx.ra;
	assign idexrb= IdEx.rb;
	assign exmembranchflag= ExMem.branch_flag;
    always_comb begin
      if ((ExMem.RegWrite)&&(ExMem.rd !=0) && ((ExMem.rd != IdEx.ra && ExMem.rd == IdEx.ra) || (ExMem.branch_flag == 0 && ExMem.rd == IdEx.ra)))
             ForwardingA = 2'b10;
         else if (MemWb.RegWrite && MemWb.rd !=0 && ExMem.rd != IdEx.ra && MemWb.rd == IdEx.ra)
             ForwardingA = 2'b01;
         else
             ForwardingA = 2'b00;

         if ((ExMem.RegWrite)&& (ExMem.rd !=0) && ((ExMem.rd != IdEx.rb && ExMem.rd == IdEx.rb) || (ExMem.branch_flag == 0 && ExMem.rd == IdEx.rb && ExMem.rd == IdEx.ra)))
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

        if (MemWb.RegWrite && MemWb.rd !=0 && ExMem.rd != IdEx.rc && MemWb.rd == ExMem.rc)
            ForwardingC = 1;
        else
            ForwardingC = 0;

		if (MemWb.rd !=0 && MemWb.rd == ExMem.rd)
            ForwardingD = 1;
        else
            ForwardingD = 0;
    end

	always_comb begin
		case(IdEx.ALUSrc)
			2'b00: alu1in_b_mux = IdEx.db;
			2'b01: alu1in_b_mux = IdEx.signextend;
			2'b10: alu1in_b_mux = {{(27){1'b0}},IdEx.shamt};
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
			4'b1001: Alu1out = (alu1in_a <=  alu1in_b) ? 1:0;
			default: Alu1out = alu1in_a + alu1in_b;
		endcase

        assign zero_flag = (Alu1out == 0) ? 1:0;
	end

	struct packed{
		logic [6:0] PCincremented;
		logic [3:0] MemRead;
		logic [3:0] MemWrite;
        logic MemSignExtend;
		logic RegWrite;
        logic ALUOp2;
		logic [1:0] MemToReg;
		logic [31:0] Alu1out;
		logic [31:0] db;
		logic [31:0] dc;
		logic [4:0] rd;
		logic [4:0] rc;
        logic zero_flag;
        logic [1:0]branch_flag;
        logic [13:0] branch_addr;
		logic double_jump_flag;
	} ExMem;

	// Ex Mem Stage
	always @ (posedge clk) begin
        ExMem.PCincremented <= IdEx.PCincremented;
        ExMem.MemSignExtend <= IdEx.MemSignExtend;
		ExMem.MemRead <= IdEx.MemRead;
		ExMem.MemWrite <= IdEx.MemWrite;
		ExMem.RegWrite <= IdEx.RegWrite;
		ExMem.MemToReg <= IdEx.MemToReg;
		ExMem.Alu1out <= Alu1out;
        ExMem.ALUOp2 <= IdEx.ALUOp2;
		ExMem.db <= IdEx.db;
		ExMem.dc <= IdEx.dc;
		ExMem.rd <= IdEx.rd;
		ExMem.rc <= IdEx.rc;
        ExMem.zero_flag <= zero_flag;
        ExMem.branch_flag <= IdEx.branch_flag;
        ExMem.branch_addr <= IdEx.branch_addr;
		ExMem.double_jump_flag <= IdEx.double_jump_flag;
	end

	logic [31:0] alu2in_a;
	logic [31:0] alu2in_b;
	logic [31:0] Alu2out;
    logic branch_src;
    logic branch_ne;
    logic branch_eq;

    assign alu2in_a = ExMem.Alu1out;
    assign alu2in_b = (ForwardingC == 1)?  RF_WriteData:ExMem.dc;

    assign branch_eq = (ExMem.zero_flag == 1 && ExMem.branch_flag[0] == 1 && ExMem.branch_flag[1] == 0) ? 1:0;
    assign branch_ne = (ExMem.zero_flag == 0 && ExMem.branch_flag[1] == 1 && ExMem.branch_flag[0] == 0) ? 1:0;
    assign branch_src = (branch_ne || branch_eq) ? 1:0;
	assign double_jump = (ExMem.Alu1out == 1 && ExMem.double_jump_flag == 1) ? 1:0;

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
    assign datamem_write_data = (ForwardingD) ? MemWb.Alu2out:ExMem.db;

	// Data Memory Write Logic
	always @(posedge clk) begin
		if (ExMem.MemWrite[3])
			datamem[datamem_address]   <= datamem_write_data[31:24];
        if(ExMem.MemWrite[2])
			datamem[datamem_address+1] <= datamem_write_data[23:16];
        if(ExMem.MemWrite[1])
			datamem[datamem_address+2] <= datamem_write_data[15:8];
        if(ExMem.MemWrite[0])
			datamem[datamem_address+3] <= datamem_write_data[7:0];
            $writememh("data_memory.dat", datamem);
		end

	// Data Memory Read Logic
    always_comb begin
     datamem_data[7:0]    =   (ExMem.MemRead[0])? datamem[datamem_address+3]:8'bx;
        if(ExMem.MemRead[1] == 0 && ExMem.MemSignExtend)
            datamem_data[15:8] = {(8){datamem_data[7]}};
         else if (ExMem.MemRead[1])
            datamem_data[15:8] = datamem[datamem_address+2];
         else
            datamem_data[15:8] = 8'b0;

         if(ExMem.MemRead[2] == 0 && ExMem.MemSignExtend && ExMem.MemRead[1] == 0)
             datamem_data[23:16] = {(8){datamem_data[7]}};
         else if (ExMem.MemRead[2] == 0 && ExMem.MemSignExtend)
             datamem_data[23:16] = {(8){datamem_data[15]}};
         else if(ExMem.MemRead[2])
            datamem_data[23:16] = datamem[datamem_address+1];
         else
             datamem_data[23:16] = 8'b0;

         if(ExMem.MemRead[3] == 0 && ExMem.MemSignExtend && ExMem.MemRead[1] == 0)
             datamem_data[31:24] = {(8){datamem_data[7]}};
         else if (ExMem.MemRead[3] == 0 && ExMem.MemSignExtend)
             datamem_data[31:24] = {(8){datamem_data[15]}};
         else if(ExMem.MemRead[3])
             datamem_data[31:24] = datamem[datamem_address];
         else
             datamem_data[31:24] = 8'b0;
     end

	//PC logic

	always@ (posedge clk)begin
		if(reset)
			PC <= PCSTART;
        else if(PCenable)
		    PC <= (branch_src) ? ExMem.branch_addr[6:0]: (PCSrc ? JumpAddress[6:0]:(double_jump ? PC+7'b1100:PC+7'b100));

		

    end
endmodule

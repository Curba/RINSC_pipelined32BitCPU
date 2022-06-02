// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+617,"Op", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+617,"Op", false,-1, 7,0);
    tracep->declBus(c+19,"MemRead", false,-1, 3,0);
    tracep->declBus(c+20,"MemWrite", false,-1, 3,0);
    tracep->declBit(c+21,"PCSrc", false,-1);
    tracep->declBus(c+22,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+23,"RegWrite", false,-1);
    tracep->declBus(c+24,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+25,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+26,"ALUOp2", false,-1);
    tracep->declBit(c+27,"RbSelect", false,-1);
    tracep->declBit(c+28,"MemSignExtend", false,-1);
    tracep->declBus(c+29,"branch_flag", false,-1, 1,0);
    tracep->declBit(c+30,"jump_flag", false,-1);
    tracep->declBit(c+31,"double_jump_flag", false,-1);
    tracep->declBus(c+32,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+629,"icache_instrRequest", false,-1);
    tracep->declBus(c+33,"icache_instruction", false,-1, 31,0);
    tracep->declBit(c+34,"icache_instrReady", false,-1);
    tracep->declBus(c+35,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+36,"dcache_dataRequest", false,-1);
    tracep->declBit(c+37,"dcache_rw", false,-1);
    tracep->declBus(c+38,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+39,"dcache_byte_en", false,-1, 3,0);
    tracep->declBus(c+40,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+41,"dcache_data_ready", false,-1);
    tracep->declBit(c+612,"transfer_in_progress", false,-1);
    tracep->pushNamePrefix("ctr ");
    tracep->declBus(c+617,"Op", false,-1, 7,0);
    tracep->declBus(c+25,"AluSrc", false,-1, 1,0);
    tracep->declBus(c+24,"AluOp", false,-1, 3,0);
    tracep->declBus(c+29,"branch_flag", false,-1, 1,0);
    tracep->declBit(c+30,"jump_flag", false,-1);
    tracep->declBit(c+28,"MemSignExtend", false,-1);
    tracep->declBit(c+21,"PCSrc", false,-1);
    tracep->declBus(c+19,"MemRead", false,-1, 3,0);
    tracep->declBus(c+20,"MemWrite", false,-1, 3,0);
    tracep->declBit(c+26,"AluOp2", false,-1);
    tracep->declBit(c+27,"RbSelect", false,-1);
    tracep->declBus(c+22,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+31,"double_jump_flag", false,-1);
    tracep->declBit(c+23,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+615,"clk", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+20,"MemWrite", false,-1, 3,0);
    tracep->declBus(c+22,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+30,"jump_flag", false,-1);
    tracep->declBit(c+23,"RegWrite", false,-1);
    tracep->declBit(c+21,"PCSrc", false,-1);
    tracep->declBit(c+28,"MemSignExtend", false,-1);
    tracep->declBus(c+29,"branch_flag", false,-1, 1,0);
    tracep->declBus(c+19,"MemRead", false,-1, 3,0);
    tracep->declBus(c+24,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+25,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+27,"RbSelect", false,-1);
    tracep->declBit(c+26,"ALUOp2", false,-1);
    tracep->declBit(c+31,"double_jump_flag", false,-1);
    tracep->declBit(c+34,"icache_instrReady", false,-1);
    tracep->declBus(c+33,"icache_instruction", false,-1, 31,0);
    tracep->declBus(c+32,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+629,"icache_instrRequest", false,-1);
    tracep->declBus(c+40,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+41,"dcache_data_ready", false,-1);
    tracep->declBus(c+35,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+36,"dcache_dataRequest", false,-1);
    tracep->declBit(c+37,"dcache_rw", false,-1);
    tracep->declBus(c+38,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+39,"dcache_byte_en", false,-1, 3,0);
    tracep->declBit(c+612,"transfer_in_progress", false,-1);
    tracep->declBus(c+617,"Op", false,-1, 7,0);
    tracep->declBus(c+32,"PC", false,-1, 11,0);
    tracep->declBus(c+630,"PCSTART", false,-1, 11,0);
    tracep->declBus(c+631,"datamem", false,-1, 11,0);
    tracep->declBus(c+35,"datamem_address", false,-1, 11,0);
    tracep->declBus(c+40,"datamem_data", false,-1, 31,0);
    tracep->declBus(c+38,"datamem_write_data", false,-1, 31,0);
    tracep->declBus(c+42,"ForwardingA", false,-1, 1,0);
    tracep->declBus(c+43,"ForwardingB", false,-1, 1,0);
    tracep->declBit(c+44,"ForwardingC", false,-1);
    tracep->declBit(c+45,"ForwardingD", false,-1);
    tracep->declBit(c+618,"stall_flag", false,-1);
    tracep->declBit(c+613,"PCenable", false,-1);
    tracep->declBit(c+619,"IfIdEN", false,-1);
    tracep->declBit(c+46,"flush", false,-1);
    tracep->declBus(c+47,"branchId", false,-1, 1,0);
    tracep->declBus(c+48,"branchex", false,-1, 1,0);
    tracep->declBit(c+614,"mem_stall_flag", false,-1);
    tracep->declBit(c+49,"normal_stall", false,-1);
    tracep->declQuad(c+50,"IfId", false,-1, 43,0);
    tracep->declBus(c+52,"JumpAddress", false,-1, 18,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+499+i*1,"RF", true,(i+0), 31,0);
    }
    tracep->declBus(c+620,"da", false,-1, 31,0);
    tracep->declBus(c+621,"db", false,-1, 31,0);
    tracep->declBus(c+622,"dc", false,-1, 31,0);
    tracep->declBus(c+53,"RF_WriteData", false,-1, 31,0);
    tracep->declBus(c+54,"RF_WriteAddr", false,-1, 31,0);
    tracep->declBit(c+55,"double_jump", false,-1);
    tracep->declArray(c+56,"IdEx", false,-1, 201,0);
    tracep->declBus(c+63,"alu1in_a", false,-1, 31,0);
    tracep->declBus(c+64,"alu1in_b", false,-1, 31,0);
    tracep->declBus(c+65,"alu1in_b_mux", false,-1, 31,0);
    tracep->declBus(c+66,"Alu1out", false,-1, 31,0);
    tracep->declBit(c+67,"zero_flag", false,-1);
    tracep->declBus(c+68,"exmemrd", false,-1, 4,0);
    tracep->declBus(c+69,"idexra", false,-1, 4,0);
    tracep->declBus(c+70,"idexrb", false,-1, 4,0);
    tracep->declBus(c+48,"exmembranchflag", false,-1, 1,0);
    tracep->declBit(c+71,"debugmemwbregwrite", false,-1);
    tracep->declBit(c+72,"debugexmemregwrite", false,-1);
    tracep->declBus(c+48,"debugbranch", false,-1, 1,0);
    tracep->declBus(c+73,"debugmemwbrd", false,-1, 4,0);
    tracep->declBus(c+68,"debugexmemrd", false,-1, 4,0);
    tracep->declBus(c+69,"debugidexra", false,-1, 4,0);
    tracep->declArray(c+74,"ExMem", false,-1, 148,0);
    tracep->declBus(c+79,"alu2in_a", false,-1, 31,0);
    tracep->declBus(c+80,"alu2in_b", false,-1, 31,0);
    tracep->declBus(c+81,"Alu2out", false,-1, 31,0);
    tracep->declBit(c+82,"branch_src", false,-1);
    tracep->declBit(c+83,"branch_ne", false,-1);
    tracep->declBit(c+84,"branch_eq", false,-1);
    tracep->declArray(c+85,"MemWb", false,-1, 83,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+32,"icache_PC", false,-1, 11,0);
    tracep->declBit(c+629,"icache_instrRequest", false,-1);
    tracep->declBus(c+33,"icache_instruction", false,-1, 31,0);
    tracep->declBit(c+34,"icache_instrReady", false,-1);
    tracep->declBus(c+35,"dcache_address", false,-1, 11,0);
    tracep->declBit(c+36,"dcache_dataRequest", false,-1);
    tracep->declBit(c+37,"dcache_rw", false,-1);
    tracep->declBus(c+38,"dcache_writeData", false,-1, 31,0);
    tracep->declBus(c+39,"dcache_byte_en", false,-1, 3,0);
    tracep->declBus(c+40,"dcache_readData", false,-1, 31,0);
    tracep->declBit(c+41,"dcache_data_ready", false,-1);
    tracep->declBit(c+612,"transfer_in_progress", false,-1);
    tracep->declBit(c+632,"mem_ready_icache", false,-1);
    tracep->declBit(c+633,"zeros", false,-1);
    tracep->declBit(c+603,"icache_blockRequest", false,-1);
    tracep->declBit(c+604,"icache_blockReady", false,-1);
    tracep->declBus(c+32,"icache_blockAddress", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+88+i*1,"icache_instructionBlock", true,(i+0), 31,0);
    }
    tracep->declBit(c+531,"dcache_blockRequest", false,-1);
    tracep->declBit(c+605,"dcache_blockReady", false,-1);
    tracep->declBit(c+532,"dcache_mem_rw", false,-1);
    tracep->declBus(c+104,"dcache_blockAddress", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+105+i*1,"dcache_readBlock", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+121+i*1,"dcache_wbBlock", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("dcache_controller ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+35,"dcache_address", false,-1, 11,0);
    tracep->declBus(c+38,"dcache_data_in", false,-1, 31,0);
    tracep->declBus(c+39,"dcache_byte_en", false,-1, 3,0);
    tracep->declBit(c+37,"dcache_rw", false,-1);
    tracep->declBit(c+36,"dcache_valid", false,-1);
    tracep->declBus(c+40,"dcache_data_out", false,-1, 31,0);
    tracep->declBit(c+41,"dcache_data_ready", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+137+i*1,"mem_data_in", true,(i+0), 31,0);
    }
    tracep->declBit(c+605,"mem_ready", false,-1);
    tracep->declBus(c+104,"mem_address", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+153+i*1,"mem_data_out", true,(i+0), 31,0);
    }
    tracep->declBit(c+532,"mem_rw", false,-1);
    tracep->declBit(c+531,"mem_valid", false,-1);
    tracep->declBus(c+533,"nstate", false,-1, 2,0);
    tracep->declBus(c+169,"cstate", false,-1, 2,0);
    tracep->declBit(c+170,"dcache_valid_read", false,-1);
    tracep->declBit(c+171,"dcache_dirty_read", false,-1);
    tracep->declBus(c+172,"dcache_tag_read", false,-1, 11,9);
    tracep->declBit(c+173,"dcache_valid_write", false,-1);
    tracep->declBit(c+174,"dcache_dirty_write", false,-1);
    tracep->declBus(c+175,"dcache_tag_write", false,-1, 11,9);
    tracep->declBus(c+176,"dcache_tag_index", false,-1, 3,0);
    tracep->declBit(c+177,"dcache_tag_we", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+178+i*1,"dcache_sram_read", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+534+i*1,"dcache_sram_write", true,(i+0), 31,0);
    }
    tracep->declBus(c+176,"dcache_sram_index", false,-1, 3,0);
    tracep->declBit(c+550,"dcache_sram_we", false,-1);
    tracep->declBus(c+40,"dcache_data_to_cpu", false,-1, 31,0);
    tracep->declBit(c+41,"dcache_data_to_cpu_ready", false,-1);
    tracep->declBus(c+104,"mem_request_address", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+194+i*1,"mem_request_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+532,"mem_request_rw", false,-1);
    tracep->declBit(c+531,"mem_request_valid", false,-1);
    tracep->declBus(c+210,"dcache_sram_write_temp", false,-1, 31,0);
    tracep->pushNamePrefix("data_cache_sram ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+550,"we", false,-1);
    tracep->declBus(c+176,"index", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+551+i*1,"data_write", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+211+i*1,"data_read", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_cache_tag ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+177,"we", false,-1);
    tracep->declBus(c+176,"index", false,-1, 3,0);
    tracep->declBit(c+173,"valid_in", false,-1);
    tracep->declBit(c+174,"dirty_in", false,-1);
    tracep->declBus(c+175,"tag_in", false,-1, 11,9);
    tracep->declBit(c+170,"valid_out", false,-1);
    tracep->declBit(c+171,"dirty_out", false,-1);
    tracep->declBus(c+172,"tag_out", false,-1, 11,9);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+227+i*1,"dcache_valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+243+i*1,"dcache_dirty", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+259+i*1,"dcache_tag", true,(i+0), 11,9);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dram_controller ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBit(c+603,"dram_port1_request", false,-1);
    tracep->declBus(c+32,"dram_port1_address", false,-1, 11,0);
    tracep->declBit(c+633,"dram_port1_we", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+275+i*1,"dram_port1_read_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+634+i*1,"dram_port1_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+604,"dram_port1_acknowledge", false,-1);
    tracep->declBit(c+531,"dram_port2_request", false,-1);
    tracep->declBus(c+104,"dram_port2_address", false,-1, 11,0);
    tracep->declBit(c+532,"dram_port2_we", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+291+i*1,"dram_port2_read_data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+307+i*1,"dram_port2_write_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+605,"dram_port2_acknowledge", false,-1);
    tracep->declBit(c+612,"dram_busy", false,-1);
    tracep->declBit(c+623,"dram_port1_busy", false,-1);
    tracep->declBit(c+624,"dram_port2_busy", false,-1);
    tracep->pushNamePrefix("dram_interface_dcache ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+104,"bus_address_to_mem", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+323+i*1,"bus_data_to_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+567,"bus_read_enable", false,-1);
    tracep->declBit(c+568,"bus_write_enable", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+339+i*1,"bus_data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+605,"acknowledge_from_mem", false,-1);
    tracep->declBus(c+606,"data_pin", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+355+i*1,"data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+371,"data_to_mem", false,-1, 31,0);
    tracep->declBus(c+372,"address_to_mem", false,-1, 11,0);
    tracep->declBus(c+607,"address_to_mem_with_word_offset", false,-1, 11,0);
    tracep->declBit(c+625,"we", false,-1);
    tracep->declBit(c+373,"we_from_mem", false,-1);
    tracep->declBit(c+626,"re", false,-1);
    tracep->declBit(c+374,"re_from_mem", false,-1);
    tracep->declBit(c+605,"acknowledge", false,-1);
    tracep->declBus(c+608,"word_count", false,-1, 3,0);
    tracep->declBus(c+375,"cycle_count", false,-1, 1,0);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+607,"address", false,-1, 11,0);
    tracep->declBus(c+606,"data", false,-1, 31,0);
    tracep->declBit(c+626,"read_enable", false,-1);
    tracep->declBit(c+625,"write_enable", false,-1);
    tracep->declBit(c+373,"write_data_enable", false,-1);
    tracep->declBit(c+374,"read_data_enable", false,-1);
    tracep->declBit(c+605,"acknowledge", false,-1);
    tracep->declQuad(c+376,"read_acknowledge_delay_line", false,-1, 62,0);
    tracep->declArray(c+378,"write_acknowledge_delay_line", false,-1, 64,0);
    tracep->declBit(c+381,"int_read_acknowledge", false,-1);
    tracep->declBit(c+382,"int_write_acknowledge", false,-1);
    tracep->pushNamePrefix("dram_array ");
    tracep->declBus(c+607,"address", false,-1, 11,0);
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBus(c+606,"data", false,-1, 31,0);
    tracep->declBit(c+373,"wren", false,-1);
    tracep->declBus(c+606,"din", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dram_interface_icache ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+32,"bus_address_to_mem", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,"bus_data_to_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+623,"bus_read_enable", false,-1);
    tracep->declBit(c+633,"bus_write_enable", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+383+i*1,"bus_data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBit(c+604,"acknowledge_from_mem", false,-1);
    tracep->declBus(c+609,"data_pin", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+399+i*1,"data_from_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+415,"data_to_mem", false,-1, 31,0);
    tracep->declBus(c+416,"address_to_mem", false,-1, 11,0);
    tracep->declBus(c+610,"address_to_mem_with_word_offset", false,-1, 11,0);
    tracep->declBit(c+627,"we", false,-1);
    tracep->declBit(c+417,"we_from_mem", false,-1);
    tracep->declBit(c+628,"re", false,-1);
    tracep->declBit(c+418,"re_from_mem", false,-1);
    tracep->declBit(c+604,"acknowledge", false,-1);
    tracep->declBus(c+611,"word_count", false,-1, 3,0);
    tracep->declBus(c+419,"cycle_count", false,-1, 1,0);
    tracep->pushNamePrefix("dram ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+610,"address", false,-1, 11,0);
    tracep->declBus(c+609,"data", false,-1, 31,0);
    tracep->declBit(c+628,"read_enable", false,-1);
    tracep->declBit(c+627,"write_enable", false,-1);
    tracep->declBit(c+417,"write_data_enable", false,-1);
    tracep->declBit(c+418,"read_data_enable", false,-1);
    tracep->declBit(c+604,"acknowledge", false,-1);
    tracep->declQuad(c+420,"read_acknowledge_delay_line", false,-1, 62,0);
    tracep->declArray(c+422,"write_acknowledge_delay_line", false,-1, 64,0);
    tracep->declBit(c+425,"int_read_acknowledge", false,-1);
    tracep->declBit(c+426,"int_write_acknowledge", false,-1);
    tracep->pushNamePrefix("dram_array ");
    tracep->declBus(c+610,"address", false,-1, 11,0);
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBus(c+609,"data", false,-1, 31,0);
    tracep->declBit(c+417,"wren", false,-1);
    tracep->declBus(c+609,"din", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("icache_controller ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+616,"reset", false,-1);
    tracep->declBus(c+32,"icache_address", false,-1, 11,0);
    tracep->declBit(c+629,"icache_valid", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+427+i*1,"mem_data_in", true,(i+0), 31,0);
    }
    tracep->declBit(c+604,"mem_ready", false,-1);
    tracep->declBus(c+32,"mem_address", false,-1, 11,0);
    tracep->declBit(c+603,"mem_valid", false,-1);
    tracep->declBus(c+33,"icache_data_out", false,-1, 31,0);
    tracep->declBit(c+34,"icache_data_ready", false,-1);
    tracep->declBus(c+569,"nstate", false,-1, 1,0);
    tracep->declBus(c+443,"cstate", false,-1, 1,0);
    tracep->declBit(c+444,"icache_valid_read", false,-1);
    tracep->declBus(c+445,"icache_tag_read", false,-1, 11,8);
    tracep->declBit(c+446,"icache_valid_write", false,-1);
    tracep->declBus(c+447,"icache_tag_write", false,-1, 11,8);
    tracep->declBus(c+448,"icache_tag_index", false,-1, 2,0);
    tracep->declBit(c+449,"icache_tag_we", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+450+i*1,"icache_sram_read", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+570+i*1,"icache_sram_write", true,(i+0), 31,0);
    }
    tracep->declBus(c+448,"icache_sram_index", false,-1, 2,0);
    tracep->declBit(c+586,"icache_sram_we", false,-1);
    tracep->declBus(c+33,"icache_data_to_cpu", false,-1, 31,0);
    tracep->declBit(c+34,"icache_data_to_cpu_ready", false,-1);
    tracep->declBus(c+32,"mem_request_address", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+650+i*1,"mem_request_data", true,(i+0), 31,0);
    }
    tracep->declBit(c+603,"mem_request_valid", false,-1);
    tracep->declBit(c+466,"synchronized_reset", false,-1);
    tracep->pushNamePrefix("inst_cache_sram ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+586,"we", false,-1);
    tracep->declBus(c+448,"index", false,-1, 2,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+587+i*1,"data_write", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+467+i*1,"data_read", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_cache_tag ");
    tracep->declBit(c+615,"clock", false,-1);
    tracep->declBit(c+449,"we", false,-1);
    tracep->declBus(c+448,"index", false,-1, 2,0);
    tracep->declBit(c+446,"valid_in", false,-1);
    tracep->declBus(c+447,"tag_in", false,-1, 11,8);
    tracep->declBit(c+444,"valid_out", false,-1);
    tracep->declBus(c+445,"tag_out", false,-1, 11,8);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+483+i*1,"icache_valid", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+491+i*1,"icache_tag", true,(i+0), 11,8);
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_sram__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[0]),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[1]),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[2]),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[3]),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[4]),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[5]),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[6]),32);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[7]),32);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[8]),32);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[9]),32);
    tracep->fullIData(oldp+12,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[10]),32);
    tracep->fullIData(oldp+13,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[11]),32);
    tracep->fullIData(oldp+14,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[12]),32);
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[13]),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[14]),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_icache__bus_data_to_mem[15]),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_sram__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+19,(vlSelf->top__DOT__MemRead),4);
    tracep->fullCData(oldp+20,(vlSelf->top__DOT__MemWrite),4);
    tracep->fullBit(oldp+21,(vlSelf->top__DOT__PCSrc));
    tracep->fullCData(oldp+22,(vlSelf->top__DOT__MemToReg),2);
    tracep->fullBit(oldp+23,(vlSelf->top__DOT__RegWrite));
    tracep->fullCData(oldp+24,(vlSelf->top__DOT__ALUOp),4);
    tracep->fullCData(oldp+25,(vlSelf->top__DOT__ALUSrc),2);
    tracep->fullBit(oldp+26,(vlSelf->top__DOT__ALUOp2));
    tracep->fullBit(oldp+27,(vlSelf->top__DOT__RbSelect));
    tracep->fullBit(oldp+28,(vlSelf->top__DOT__MemSignExtend));
    tracep->fullCData(oldp+29,(vlSelf->top__DOT__branch_flag),2);
    tracep->fullBit(oldp+30,(vlSelf->top__DOT__jump_flag));
    tracep->fullBit(oldp+31,(vlSelf->top__DOT__double_jump_flag));
    tracep->fullSData(oldp+32,(vlSelf->top__DOT__datapath__DOT__PC),12);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read
                               [(0xfU & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                         >> 2U))]),32);
    tracep->fullBit(oldp+34,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready));
    tracep->fullSData(oldp+35,((0xfffU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           << 4U) | 
                                          (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU)))),12);
    tracep->fullBit(oldp+36,(vlSelf->top__DOT__dcache_dataRequest));
    tracep->fullBit(oldp+37,(((0U != (0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                              >> 1U)))
                               ? 1U : 0U)));
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__datapath__DOT__datamem_write_data),32);
    tracep->fullCData(oldp+39,((0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[4U] 
                                        >> 1U))),4);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read
                               [(0xfU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                          << 2U) | 
                                         (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                          >> 0x1eU)))]),32);
    tracep->fullBit(oldp+41,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready));
    tracep->fullCData(oldp+42,(vlSelf->top__DOT__datapath__DOT__ForwardingA),2);
    tracep->fullCData(oldp+43,(vlSelf->top__DOT__datapath__DOT__ForwardingB),2);
    tracep->fullBit(oldp+44,(((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                 >> 7U) & (0U != (0x1fU 
                                                  & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                               & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x17U)) 
                                  != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                      >> 0x1bU))) & 
                              ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                               == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x12U))))));
    tracep->fullBit(oldp+45,(((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                              & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                 == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                              >> 0x17U))))));
    tracep->fullBit(oldp+46,(vlSelf->top__DOT__datapath__DOT__flush));
    tracep->fullCData(oldp+47,((3U & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                      >> 0x10U))),2);
    tracep->fullCData(oldp+48,((3U & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                      >> 0xfU))),2);
    tracep->fullBit(oldp+49,(vlSelf->top__DOT__datapath__DOT__normal_stall));
    tracep->fullQData(oldp+50,(vlSelf->top__DOT__datapath__DOT__IfId),44);
    tracep->fullIData(oldp+52,((0x7ffffU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x14U)))),19);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__datapath__DOT__RF_WriteData),32);
    tracep->fullIData(oldp+54,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
    tracep->fullBit(oldp+55,((((1U == ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                                  >> 0x1cU))) 
                               & vlSelf->top__DOT__datapath__DOT__ExMem[0U])
                               ? 1U : 0U)));
    tracep->fullWData(oldp+56,(vlSelf->top__DOT__datapath__DOT__IdEx),202);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__datapath__DOT__alu1in_a),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
    tracep->fullIData(oldp+65,(((0U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                              >> 0x19U)))
                                 ? ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                     << 4U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                               >> 0x1cU))
                                 : ((1U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                  >> 0x19U)))
                                     ? ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                         << 4U) | (
                                                   vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                   >> 0x1cU))
                                     : ((2U == (3U 
                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   >> 0x19U)))
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                             >> 0x12U))
                                         : ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                               >> 0x1cU)))))),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
    tracep->fullBit(oldp+67,(vlSelf->top__DOT__datapath__DOT__zero_flag));
    tracep->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0x17U))),5);
    tracep->fullCData(oldp+69,((0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[6U] 
                                         >> 5U))),5);
    tracep->fullCData(oldp+70,((0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])),5);
    tracep->fullBit(oldp+71,((1U & (vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U))));
    tracep->fullBit(oldp+72,((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                              >> 0x1fU)));
    tracep->fullCData(oldp+73,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),5);
    tracep->fullWData(oldp+74,(vlSelf->top__DOT__datapath__DOT__ExMem),149);
    tracep->fullIData(oldp+79,(((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                 << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU))),32);
    tracep->fullIData(oldp+80,((((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U) & (0U != 
                                              (0x1fU 
                                               & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                  & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x17U)) 
                                     != (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                         >> 0x1bU))) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x12U))))
                                 ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                 : ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                     << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x1cU)))),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__datapath__DOT__Alu2out),32);
    tracep->fullBit(oldp+82,(vlSelf->top__DOT__datapath__DOT__branch_src));
    tracep->fullBit(oldp+83,(((IData)((0x10000U == 
                                       (0x38000U & 
                                        vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                               ? 1U : 0U)));
    tracep->fullBit(oldp+84,(((IData)((0x28000U == 
                                       (0x38000U & 
                                        vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                               ? 1U : 0U)));
    tracep->fullWData(oldp+85,(vlSelf->top__DOT__datapath__DOT__MemWb),84);
    tracep->fullIData(oldp+88,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[0]),32);
    tracep->fullIData(oldp+89,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[1]),32);
    tracep->fullIData(oldp+90,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[2]),32);
    tracep->fullIData(oldp+91,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[3]),32);
    tracep->fullIData(oldp+92,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[4]),32);
    tracep->fullIData(oldp+93,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[5]),32);
    tracep->fullIData(oldp+94,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[6]),32);
    tracep->fullIData(oldp+95,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[7]),32);
    tracep->fullIData(oldp+96,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[8]),32);
    tracep->fullIData(oldp+97,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[9]),32);
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[10]),32);
    tracep->fullIData(oldp+99,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[11]),32);
    tracep->fullIData(oldp+100,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[12]),32);
    tracep->fullIData(oldp+101,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[13]),32);
    tracep->fullIData(oldp+102,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[14]),32);
    tracep->fullIData(oldp+103,(vlSelf->top__DOT__memory__DOT__icache_instructionBlock[15]),32);
    tracep->fullSData(oldp+104,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_address),12);
    tracep->fullIData(oldp+105,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[0]),32);
    tracep->fullIData(oldp+106,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[1]),32);
    tracep->fullIData(oldp+107,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[2]),32);
    tracep->fullIData(oldp+108,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[3]),32);
    tracep->fullIData(oldp+109,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[4]),32);
    tracep->fullIData(oldp+110,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[5]),32);
    tracep->fullIData(oldp+111,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[6]),32);
    tracep->fullIData(oldp+112,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[7]),32);
    tracep->fullIData(oldp+113,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[8]),32);
    tracep->fullIData(oldp+114,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[9]),32);
    tracep->fullIData(oldp+115,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[10]),32);
    tracep->fullIData(oldp+116,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[11]),32);
    tracep->fullIData(oldp+117,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[12]),32);
    tracep->fullIData(oldp+118,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[13]),32);
    tracep->fullIData(oldp+119,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[14]),32);
    tracep->fullIData(oldp+120,(vlSelf->top__DOT__memory__DOT__dcache_readBlock[15]),32);
    tracep->fullIData(oldp+121,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[0]),32);
    tracep->fullIData(oldp+122,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[1]),32);
    tracep->fullIData(oldp+123,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[2]),32);
    tracep->fullIData(oldp+124,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[3]),32);
    tracep->fullIData(oldp+125,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[4]),32);
    tracep->fullIData(oldp+126,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[5]),32);
    tracep->fullIData(oldp+127,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[6]),32);
    tracep->fullIData(oldp+128,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[7]),32);
    tracep->fullIData(oldp+129,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[8]),32);
    tracep->fullIData(oldp+130,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[9]),32);
    tracep->fullIData(oldp+131,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[10]),32);
    tracep->fullIData(oldp+132,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[11]),32);
    tracep->fullIData(oldp+133,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[12]),32);
    tracep->fullIData(oldp+134,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[13]),32);
    tracep->fullIData(oldp+135,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[14]),32);
    tracep->fullIData(oldp+136,(vlSelf->top__DOT__memory__DOT__dcache_wbBlock[15]),32);
    tracep->fullIData(oldp+137,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[0]),32);
    tracep->fullIData(oldp+138,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[1]),32);
    tracep->fullIData(oldp+139,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[2]),32);
    tracep->fullIData(oldp+140,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[3]),32);
    tracep->fullIData(oldp+141,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[4]),32);
    tracep->fullIData(oldp+142,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[5]),32);
    tracep->fullIData(oldp+143,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[6]),32);
    tracep->fullIData(oldp+144,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[7]),32);
    tracep->fullIData(oldp+145,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[8]),32);
    tracep->fullIData(oldp+146,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[9]),32);
    tracep->fullIData(oldp+147,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[10]),32);
    tracep->fullIData(oldp+148,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[11]),32);
    tracep->fullIData(oldp+149,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[12]),32);
    tracep->fullIData(oldp+150,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[13]),32);
    tracep->fullIData(oldp+151,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[14]),32);
    tracep->fullIData(oldp+152,(vlSelf->top__DOT__memory__DOT____Vcellinp__dcache_controller__mem_data_in[15]),32);
    tracep->fullIData(oldp+153,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[0]),32);
    tracep->fullIData(oldp+154,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[1]),32);
    tracep->fullIData(oldp+155,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[2]),32);
    tracep->fullIData(oldp+156,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[3]),32);
    tracep->fullIData(oldp+157,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[4]),32);
    tracep->fullIData(oldp+158,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[5]),32);
    tracep->fullIData(oldp+159,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[6]),32);
    tracep->fullIData(oldp+160,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[7]),32);
    tracep->fullIData(oldp+161,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[8]),32);
    tracep->fullIData(oldp+162,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[9]),32);
    tracep->fullIData(oldp+163,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[10]),32);
    tracep->fullIData(oldp+164,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[11]),32);
    tracep->fullIData(oldp+165,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[12]),32);
    tracep->fullIData(oldp+166,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[13]),32);
    tracep->fullIData(oldp+167,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[14]),32);
    tracep->fullIData(oldp+168,(vlSelf->top__DOT__memory__DOT____Vcellout__dcache_controller__mem_data_out[15]),32);
    tracep->fullCData(oldp+169,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__cstate),3);
    tracep->fullBit(oldp+170,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_read));
    tracep->fullBit(oldp+171,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_read));
    tracep->fullCData(oldp+172,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_read),3);
    tracep->fullBit(oldp+173,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_valid_write));
    tracep->fullBit(oldp+174,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_dirty_write));
    tracep->fullCData(oldp+175,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_write),3);
    tracep->fullCData(oldp+176,((0xfU & (vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                         >> 2U))),4);
    tracep->fullBit(oldp+177,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_tag_we));
    tracep->fullIData(oldp+178,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[0]),32);
    tracep->fullIData(oldp+179,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[1]),32);
    tracep->fullIData(oldp+180,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[2]),32);
    tracep->fullIData(oldp+181,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[3]),32);
    tracep->fullIData(oldp+182,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[4]),32);
    tracep->fullIData(oldp+183,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[5]),32);
    tracep->fullIData(oldp+184,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[6]),32);
    tracep->fullIData(oldp+185,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[7]),32);
    tracep->fullIData(oldp+186,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[8]),32);
    tracep->fullIData(oldp+187,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[9]),32);
    tracep->fullIData(oldp+188,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[10]),32);
    tracep->fullIData(oldp+189,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[11]),32);
    tracep->fullIData(oldp+190,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[12]),32);
    tracep->fullIData(oldp+191,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[13]),32);
    tracep->fullIData(oldp+192,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[14]),32);
    tracep->fullIData(oldp+193,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_read[15]),32);
    tracep->fullIData(oldp+194,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[0]),32);
    tracep->fullIData(oldp+195,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[1]),32);
    tracep->fullIData(oldp+196,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[2]),32);
    tracep->fullIData(oldp+197,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[3]),32);
    tracep->fullIData(oldp+198,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[4]),32);
    tracep->fullIData(oldp+199,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[5]),32);
    tracep->fullIData(oldp+200,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[6]),32);
    tracep->fullIData(oldp+201,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[7]),32);
    tracep->fullIData(oldp+202,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[8]),32);
    tracep->fullIData(oldp+203,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[9]),32);
    tracep->fullIData(oldp+204,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[10]),32);
    tracep->fullIData(oldp+205,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[11]),32);
    tracep->fullIData(oldp+206,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[12]),32);
    tracep->fullIData(oldp+207,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[13]),32);
    tracep->fullIData(oldp+208,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[14]),32);
    tracep->fullIData(oldp+209,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_data[15]),32);
    tracep->fullIData(oldp+210,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write_temp),32);
    tracep->fullIData(oldp+211,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[0]),32);
    tracep->fullIData(oldp+212,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[1]),32);
    tracep->fullIData(oldp+213,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[2]),32);
    tracep->fullIData(oldp+214,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[3]),32);
    tracep->fullIData(oldp+215,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[4]),32);
    tracep->fullIData(oldp+216,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[5]),32);
    tracep->fullIData(oldp+217,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[6]),32);
    tracep->fullIData(oldp+218,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[7]),32);
    tracep->fullIData(oldp+219,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[8]),32);
    tracep->fullIData(oldp+220,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[9]),32);
    tracep->fullIData(oldp+221,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[10]),32);
    tracep->fullIData(oldp+222,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[11]),32);
    tracep->fullIData(oldp+223,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[12]),32);
    tracep->fullIData(oldp+224,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[13]),32);
    tracep->fullIData(oldp+225,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[14]),32);
    tracep->fullIData(oldp+226,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellout__data_cache_sram__data_read[15]),32);
    tracep->fullBit(oldp+227,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[0]));
    tracep->fullBit(oldp+228,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[1]));
    tracep->fullBit(oldp+229,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[2]));
    tracep->fullBit(oldp+230,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[3]));
    tracep->fullBit(oldp+231,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[4]));
    tracep->fullBit(oldp+232,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[5]));
    tracep->fullBit(oldp+233,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[6]));
    tracep->fullBit(oldp+234,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[7]));
    tracep->fullBit(oldp+235,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[8]));
    tracep->fullBit(oldp+236,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[9]));
    tracep->fullBit(oldp+237,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[10]));
    tracep->fullBit(oldp+238,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[11]));
    tracep->fullBit(oldp+239,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[12]));
    tracep->fullBit(oldp+240,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[13]));
    tracep->fullBit(oldp+241,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[14]));
    tracep->fullBit(oldp+242,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_valid[15]));
    tracep->fullBit(oldp+243,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[0]));
    tracep->fullBit(oldp+244,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[1]));
    tracep->fullBit(oldp+245,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[2]));
    tracep->fullBit(oldp+246,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[3]));
    tracep->fullBit(oldp+247,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[4]));
    tracep->fullBit(oldp+248,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[5]));
    tracep->fullBit(oldp+249,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[6]));
    tracep->fullBit(oldp+250,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[7]));
    tracep->fullBit(oldp+251,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[8]));
    tracep->fullBit(oldp+252,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[9]));
    tracep->fullBit(oldp+253,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[10]));
    tracep->fullBit(oldp+254,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[11]));
    tracep->fullBit(oldp+255,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[12]));
    tracep->fullBit(oldp+256,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[13]));
    tracep->fullBit(oldp+257,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[14]));
    tracep->fullBit(oldp+258,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_dirty[15]));
    tracep->fullCData(oldp+259,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[0]),3);
    tracep->fullCData(oldp+260,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[1]),3);
    tracep->fullCData(oldp+261,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[2]),3);
    tracep->fullCData(oldp+262,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[3]),3);
    tracep->fullCData(oldp+263,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[4]),3);
    tracep->fullCData(oldp+264,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[5]),3);
    tracep->fullCData(oldp+265,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[6]),3);
    tracep->fullCData(oldp+266,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[7]),3);
    tracep->fullCData(oldp+267,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[8]),3);
    tracep->fullCData(oldp+268,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[9]),3);
    tracep->fullCData(oldp+269,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[10]),3);
    tracep->fullCData(oldp+270,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[11]),3);
    tracep->fullCData(oldp+271,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[12]),3);
    tracep->fullCData(oldp+272,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[13]),3);
    tracep->fullCData(oldp+273,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[14]),3);
    tracep->fullCData(oldp+274,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__data_cache_tag__DOT__dcache_tag[15]),3);
    tracep->fullIData(oldp+275,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[0]),32);
    tracep->fullIData(oldp+276,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[1]),32);
    tracep->fullIData(oldp+277,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[2]),32);
    tracep->fullIData(oldp+278,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[3]),32);
    tracep->fullIData(oldp+279,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[4]),32);
    tracep->fullIData(oldp+280,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[5]),32);
    tracep->fullIData(oldp+281,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[6]),32);
    tracep->fullIData(oldp+282,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[7]),32);
    tracep->fullIData(oldp+283,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[8]),32);
    tracep->fullIData(oldp+284,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[9]),32);
    tracep->fullIData(oldp+285,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[10]),32);
    tracep->fullIData(oldp+286,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[11]),32);
    tracep->fullIData(oldp+287,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[12]),32);
    tracep->fullIData(oldp+288,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[13]),32);
    tracep->fullIData(oldp+289,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[14]),32);
    tracep->fullIData(oldp+290,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port1_read_data[15]),32);
    tracep->fullIData(oldp+291,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[0]),32);
    tracep->fullIData(oldp+292,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[1]),32);
    tracep->fullIData(oldp+293,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[2]),32);
    tracep->fullIData(oldp+294,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[3]),32);
    tracep->fullIData(oldp+295,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[4]),32);
    tracep->fullIData(oldp+296,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[5]),32);
    tracep->fullIData(oldp+297,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[6]),32);
    tracep->fullIData(oldp+298,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[7]),32);
    tracep->fullIData(oldp+299,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[8]),32);
    tracep->fullIData(oldp+300,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[9]),32);
    tracep->fullIData(oldp+301,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[10]),32);
    tracep->fullIData(oldp+302,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[11]),32);
    tracep->fullIData(oldp+303,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[12]),32);
    tracep->fullIData(oldp+304,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[13]),32);
    tracep->fullIData(oldp+305,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[14]),32);
    tracep->fullIData(oldp+306,(vlSelf->top__DOT__memory__DOT____Vcellout__dram_controller__dram_port2_read_data[15]),32);
    tracep->fullIData(oldp+307,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[0]),32);
    tracep->fullIData(oldp+308,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[1]),32);
    tracep->fullIData(oldp+309,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[2]),32);
    tracep->fullIData(oldp+310,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[3]),32);
    tracep->fullIData(oldp+311,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[4]),32);
    tracep->fullIData(oldp+312,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[5]),32);
    tracep->fullIData(oldp+313,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[6]),32);
    tracep->fullIData(oldp+314,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[7]),32);
    tracep->fullIData(oldp+315,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[8]),32);
    tracep->fullIData(oldp+316,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[9]),32);
    tracep->fullIData(oldp+317,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[10]),32);
    tracep->fullIData(oldp+318,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[11]),32);
    tracep->fullIData(oldp+319,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[12]),32);
    tracep->fullIData(oldp+320,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[13]),32);
    tracep->fullIData(oldp+321,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[14]),32);
    tracep->fullIData(oldp+322,(vlSelf->top__DOT__memory__DOT____Vcellinp__dram_controller__dram_port2_write_data[15]),32);
    tracep->fullIData(oldp+323,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[0]),32);
    tracep->fullIData(oldp+324,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[1]),32);
    tracep->fullIData(oldp+325,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[2]),32);
    tracep->fullIData(oldp+326,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[3]),32);
    tracep->fullIData(oldp+327,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[4]),32);
    tracep->fullIData(oldp+328,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[5]),32);
    tracep->fullIData(oldp+329,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[6]),32);
    tracep->fullIData(oldp+330,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[7]),32);
    tracep->fullIData(oldp+331,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[8]),32);
    tracep->fullIData(oldp+332,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[9]),32);
    tracep->fullIData(oldp+333,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[10]),32);
    tracep->fullIData(oldp+334,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[11]),32);
    tracep->fullIData(oldp+335,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[12]),32);
    tracep->fullIData(oldp+336,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[13]),32);
    tracep->fullIData(oldp+337,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[14]),32);
    tracep->fullIData(oldp+338,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_data_to_mem[15]),32);
    tracep->fullIData(oldp+339,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[0]),32);
    tracep->fullIData(oldp+340,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[1]),32);
    tracep->fullIData(oldp+341,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[2]),32);
    tracep->fullIData(oldp+342,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[3]),32);
    tracep->fullIData(oldp+343,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[4]),32);
    tracep->fullIData(oldp+344,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[5]),32);
    tracep->fullIData(oldp+345,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[6]),32);
    tracep->fullIData(oldp+346,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[7]),32);
    tracep->fullIData(oldp+347,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[8]),32);
    tracep->fullIData(oldp+348,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[9]),32);
    tracep->fullIData(oldp+349,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[10]),32);
    tracep->fullIData(oldp+350,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[11]),32);
    tracep->fullIData(oldp+351,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[12]),32);
    tracep->fullIData(oldp+352,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[13]),32);
    tracep->fullIData(oldp+353,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[14]),32);
    tracep->fullIData(oldp+354,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_dcache__bus_data_from_mem[15]),32);
    tracep->fullIData(oldp+355,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[0]),32);
    tracep->fullIData(oldp+356,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[1]),32);
    tracep->fullIData(oldp+357,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[2]),32);
    tracep->fullIData(oldp+358,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[3]),32);
    tracep->fullIData(oldp+359,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[4]),32);
    tracep->fullIData(oldp+360,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[5]),32);
    tracep->fullIData(oldp+361,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[6]),32);
    tracep->fullIData(oldp+362,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[7]),32);
    tracep->fullIData(oldp+363,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[8]),32);
    tracep->fullIData(oldp+364,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[9]),32);
    tracep->fullIData(oldp+365,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[10]),32);
    tracep->fullIData(oldp+366,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[11]),32);
    tracep->fullIData(oldp+367,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[12]),32);
    tracep->fullIData(oldp+368,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[13]),32);
    tracep->fullIData(oldp+369,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[14]),32);
    tracep->fullIData(oldp+370,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_from_mem[15]),32);
    tracep->fullIData(oldp+371,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_to_mem),32);
    tracep->fullSData(oldp+372,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem),12);
    tracep->fullBit(oldp+373,((1U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line[0U])));
    tracep->fullBit(oldp+374,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 1U)))));
    tracep->fullCData(oldp+375,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__cycle_count),2);
    tracep->fullQData(oldp+376,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line),63);
    tracep->fullWData(oldp+378,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line),65);
    tracep->fullBit(oldp+381,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 0x3eU)))));
    tracep->fullBit(oldp+382,((1U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__dram__DOT__write_acknowledge_delay_line[2U])));
    tracep->fullIData(oldp+383,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[0]),32);
    tracep->fullIData(oldp+384,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[1]),32);
    tracep->fullIData(oldp+385,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[2]),32);
    tracep->fullIData(oldp+386,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[3]),32);
    tracep->fullIData(oldp+387,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[4]),32);
    tracep->fullIData(oldp+388,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[5]),32);
    tracep->fullIData(oldp+389,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[6]),32);
    tracep->fullIData(oldp+390,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[7]),32);
    tracep->fullIData(oldp+391,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[8]),32);
    tracep->fullIData(oldp+392,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[9]),32);
    tracep->fullIData(oldp+393,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[10]),32);
    tracep->fullIData(oldp+394,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[11]),32);
    tracep->fullIData(oldp+395,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[12]),32);
    tracep->fullIData(oldp+396,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[13]),32);
    tracep->fullIData(oldp+397,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[14]),32);
    tracep->fullIData(oldp+398,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellout__dram_interface_icache__bus_data_from_mem[15]),32);
    tracep->fullIData(oldp+399,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[0]),32);
    tracep->fullIData(oldp+400,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[1]),32);
    tracep->fullIData(oldp+401,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[2]),32);
    tracep->fullIData(oldp+402,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[3]),32);
    tracep->fullIData(oldp+403,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[4]),32);
    tracep->fullIData(oldp+404,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[5]),32);
    tracep->fullIData(oldp+405,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[6]),32);
    tracep->fullIData(oldp+406,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[7]),32);
    tracep->fullIData(oldp+407,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[8]),32);
    tracep->fullIData(oldp+408,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[9]),32);
    tracep->fullIData(oldp+409,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[10]),32);
    tracep->fullIData(oldp+410,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[11]),32);
    tracep->fullIData(oldp+411,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[12]),32);
    tracep->fullIData(oldp+412,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[13]),32);
    tracep->fullIData(oldp+413,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[14]),32);
    tracep->fullIData(oldp+414,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_from_mem[15]),32);
    tracep->fullIData(oldp+415,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_to_mem),32);
    tracep->fullSData(oldp+416,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem),12);
    tracep->fullBit(oldp+417,((1U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line[0U])));
    tracep->fullBit(oldp+418,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 1U)))));
    tracep->fullCData(oldp+419,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__cycle_count),2);
    tracep->fullQData(oldp+420,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line),63);
    tracep->fullWData(oldp+422,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line),65);
    tracep->fullBit(oldp+425,((1U & (IData)((vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__read_acknowledge_delay_line 
                                             >> 0x3eU)))));
    tracep->fullBit(oldp+426,((1U & vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__dram__DOT__write_acknowledge_delay_line[2U])));
    tracep->fullIData(oldp+427,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[0]),32);
    tracep->fullIData(oldp+428,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[1]),32);
    tracep->fullIData(oldp+429,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[2]),32);
    tracep->fullIData(oldp+430,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[3]),32);
    tracep->fullIData(oldp+431,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[4]),32);
    tracep->fullIData(oldp+432,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[5]),32);
    tracep->fullIData(oldp+433,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[6]),32);
    tracep->fullIData(oldp+434,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[7]),32);
    tracep->fullIData(oldp+435,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[8]),32);
    tracep->fullIData(oldp+436,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[9]),32);
    tracep->fullIData(oldp+437,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[10]),32);
    tracep->fullIData(oldp+438,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[11]),32);
    tracep->fullIData(oldp+439,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[12]),32);
    tracep->fullIData(oldp+440,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[13]),32);
    tracep->fullIData(oldp+441,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[14]),32);
    tracep->fullIData(oldp+442,(vlSelf->top__DOT__memory__DOT____Vcellinp__icache_controller__mem_data_in[15]),32);
    tracep->fullCData(oldp+443,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__cstate),2);
    tracep->fullBit(oldp+444,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_read));
    tracep->fullCData(oldp+445,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_read),4);
    tracep->fullBit(oldp+446,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_valid_write));
    tracep->fullCData(oldp+447,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_write),4);
    tracep->fullCData(oldp+448,((7U & ((IData)(vlSelf->top__DOT__datapath__DOT__PC) 
                                       >> 6U))),3);
    tracep->fullBit(oldp+449,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_tag_we));
    tracep->fullIData(oldp+450,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[0]),32);
    tracep->fullIData(oldp+451,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[1]),32);
    tracep->fullIData(oldp+452,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[2]),32);
    tracep->fullIData(oldp+453,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[3]),32);
    tracep->fullIData(oldp+454,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[4]),32);
    tracep->fullIData(oldp+455,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[5]),32);
    tracep->fullIData(oldp+456,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[6]),32);
    tracep->fullIData(oldp+457,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[7]),32);
    tracep->fullIData(oldp+458,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[8]),32);
    tracep->fullIData(oldp+459,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[9]),32);
    tracep->fullIData(oldp+460,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[10]),32);
    tracep->fullIData(oldp+461,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[11]),32);
    tracep->fullIData(oldp+462,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[12]),32);
    tracep->fullIData(oldp+463,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[13]),32);
    tracep->fullIData(oldp+464,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[14]),32);
    tracep->fullIData(oldp+465,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_read[15]),32);
    tracep->fullBit(oldp+466,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__synchronized_reset));
    tracep->fullIData(oldp+467,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[0]),32);
    tracep->fullIData(oldp+468,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[1]),32);
    tracep->fullIData(oldp+469,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[2]),32);
    tracep->fullIData(oldp+470,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[3]),32);
    tracep->fullIData(oldp+471,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[4]),32);
    tracep->fullIData(oldp+472,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[5]),32);
    tracep->fullIData(oldp+473,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[6]),32);
    tracep->fullIData(oldp+474,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[7]),32);
    tracep->fullIData(oldp+475,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[8]),32);
    tracep->fullIData(oldp+476,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[9]),32);
    tracep->fullIData(oldp+477,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[10]),32);
    tracep->fullIData(oldp+478,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[11]),32);
    tracep->fullIData(oldp+479,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[12]),32);
    tracep->fullIData(oldp+480,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[13]),32);
    tracep->fullIData(oldp+481,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[14]),32);
    tracep->fullIData(oldp+482,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellout__inst_cache_sram__data_read[15]),32);
    tracep->fullBit(oldp+483,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[0]));
    tracep->fullBit(oldp+484,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[1]));
    tracep->fullBit(oldp+485,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[2]));
    tracep->fullBit(oldp+486,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[3]));
    tracep->fullBit(oldp+487,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[4]));
    tracep->fullBit(oldp+488,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[5]));
    tracep->fullBit(oldp+489,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[6]));
    tracep->fullBit(oldp+490,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_valid[7]));
    tracep->fullCData(oldp+491,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[0]),4);
    tracep->fullCData(oldp+492,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[1]),4);
    tracep->fullCData(oldp+493,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[2]),4);
    tracep->fullCData(oldp+494,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[3]),4);
    tracep->fullCData(oldp+495,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[4]),4);
    tracep->fullCData(oldp+496,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[5]),4);
    tracep->fullCData(oldp+497,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[6]),4);
    tracep->fullCData(oldp+498,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__inst_cache_tag__DOT__icache_tag[7]),4);
    tracep->fullIData(oldp+499,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
    tracep->fullIData(oldp+500,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
    tracep->fullIData(oldp+501,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
    tracep->fullIData(oldp+502,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
    tracep->fullIData(oldp+503,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
    tracep->fullIData(oldp+504,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
    tracep->fullIData(oldp+505,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
    tracep->fullIData(oldp+506,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
    tracep->fullIData(oldp+507,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
    tracep->fullIData(oldp+508,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
    tracep->fullIData(oldp+509,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
    tracep->fullIData(oldp+510,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
    tracep->fullIData(oldp+511,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
    tracep->fullIData(oldp+512,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
    tracep->fullIData(oldp+513,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
    tracep->fullIData(oldp+514,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
    tracep->fullIData(oldp+515,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
    tracep->fullIData(oldp+516,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
    tracep->fullIData(oldp+517,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
    tracep->fullIData(oldp+518,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
    tracep->fullIData(oldp+519,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
    tracep->fullIData(oldp+520,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
    tracep->fullIData(oldp+521,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
    tracep->fullIData(oldp+522,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
    tracep->fullIData(oldp+523,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
    tracep->fullIData(oldp+524,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
    tracep->fullIData(oldp+525,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
    tracep->fullIData(oldp+526,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
    tracep->fullIData(oldp+527,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
    tracep->fullIData(oldp+528,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
    tracep->fullIData(oldp+529,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
    tracep->fullIData(oldp+530,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    tracep->fullBit(oldp+531,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_valid));
    tracep->fullBit(oldp+532,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__mem_request_rw));
    tracep->fullCData(oldp+533,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__nstate),3);
    tracep->fullIData(oldp+534,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[0]),32);
    tracep->fullIData(oldp+535,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[1]),32);
    tracep->fullIData(oldp+536,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[2]),32);
    tracep->fullIData(oldp+537,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[3]),32);
    tracep->fullIData(oldp+538,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[4]),32);
    tracep->fullIData(oldp+539,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[5]),32);
    tracep->fullIData(oldp+540,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[6]),32);
    tracep->fullIData(oldp+541,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[7]),32);
    tracep->fullIData(oldp+542,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[8]),32);
    tracep->fullIData(oldp+543,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[9]),32);
    tracep->fullIData(oldp+544,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[10]),32);
    tracep->fullIData(oldp+545,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[11]),32);
    tracep->fullIData(oldp+546,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[12]),32);
    tracep->fullIData(oldp+547,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[13]),32);
    tracep->fullIData(oldp+548,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[14]),32);
    tracep->fullIData(oldp+549,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_write[15]),32);
    tracep->fullBit(oldp+550,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_sram_we));
    tracep->fullIData(oldp+551,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[0]),32);
    tracep->fullIData(oldp+552,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[1]),32);
    tracep->fullIData(oldp+553,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[2]),32);
    tracep->fullIData(oldp+554,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[3]),32);
    tracep->fullIData(oldp+555,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[4]),32);
    tracep->fullIData(oldp+556,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[5]),32);
    tracep->fullIData(oldp+557,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[6]),32);
    tracep->fullIData(oldp+558,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[7]),32);
    tracep->fullIData(oldp+559,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[8]),32);
    tracep->fullIData(oldp+560,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[9]),32);
    tracep->fullIData(oldp+561,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[10]),32);
    tracep->fullIData(oldp+562,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[11]),32);
    tracep->fullIData(oldp+563,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[12]),32);
    tracep->fullIData(oldp+564,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[13]),32);
    tracep->fullIData(oldp+565,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[14]),32);
    tracep->fullIData(oldp+566,(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT____Vcellinp__data_cache_sram__data_write[15]),32);
    tracep->fullBit(oldp+567,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_read_enable));
    tracep->fullBit(oldp+568,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT____Vcellinp__dram_interface_dcache__bus_write_enable));
    tracep->fullCData(oldp+569,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__nstate),2);
    tracep->fullIData(oldp+570,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[0]),32);
    tracep->fullIData(oldp+571,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[1]),32);
    tracep->fullIData(oldp+572,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[2]),32);
    tracep->fullIData(oldp+573,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[3]),32);
    tracep->fullIData(oldp+574,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[4]),32);
    tracep->fullIData(oldp+575,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[5]),32);
    tracep->fullIData(oldp+576,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[6]),32);
    tracep->fullIData(oldp+577,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[7]),32);
    tracep->fullIData(oldp+578,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[8]),32);
    tracep->fullIData(oldp+579,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[9]),32);
    tracep->fullIData(oldp+580,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[10]),32);
    tracep->fullIData(oldp+581,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[11]),32);
    tracep->fullIData(oldp+582,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[12]),32);
    tracep->fullIData(oldp+583,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[13]),32);
    tracep->fullIData(oldp+584,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[14]),32);
    tracep->fullIData(oldp+585,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_write[15]),32);
    tracep->fullBit(oldp+586,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_sram_we));
    tracep->fullIData(oldp+587,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[0]),32);
    tracep->fullIData(oldp+588,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[1]),32);
    tracep->fullIData(oldp+589,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[2]),32);
    tracep->fullIData(oldp+590,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[3]),32);
    tracep->fullIData(oldp+591,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[4]),32);
    tracep->fullIData(oldp+592,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[5]),32);
    tracep->fullIData(oldp+593,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[6]),32);
    tracep->fullIData(oldp+594,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[7]),32);
    tracep->fullIData(oldp+595,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[8]),32);
    tracep->fullIData(oldp+596,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[9]),32);
    tracep->fullIData(oldp+597,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[10]),32);
    tracep->fullIData(oldp+598,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[11]),32);
    tracep->fullIData(oldp+599,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[12]),32);
    tracep->fullIData(oldp+600,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[13]),32);
    tracep->fullIData(oldp+601,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[14]),32);
    tracep->fullIData(oldp+602,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT____Vcellinp__inst_cache_sram__data_write[15]),32);
    tracep->fullBit(oldp+603,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_valid));
    tracep->fullBit(oldp+604,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__acknowledge));
    tracep->fullBit(oldp+605,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__acknowledge));
    tracep->fullIData(oldp+606,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__data_pin),32);
    tracep->fullSData(oldp+607,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__address_to_mem_with_word_offset),12);
    tracep->fullCData(oldp+608,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__word_count),4);
    tracep->fullIData(oldp+609,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__data_pin),32);
    tracep->fullSData(oldp+610,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__address_to_mem_with_word_offset),12);
    tracep->fullCData(oldp+611,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__word_count),4);
    tracep->fullBit(oldp+612,(vlSelf->top__DOT__transfer_in_progress));
    tracep->fullBit(oldp+613,(vlSelf->top__DOT__datapath__DOT__PCenable));
    tracep->fullBit(oldp+614,(vlSelf->top__DOT__datapath__DOT__mem_stall_flag));
    tracep->fullBit(oldp+615,(vlSelf->clock));
    tracep->fullBit(oldp+616,(vlSelf->reset));
    tracep->fullCData(oldp+617,(vlSelf->Op),8);
    tracep->fullBit(oldp+618,((1U & (((((0U != (0xfU 
                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   >> 0xdU))) 
                                        & (((0x1fU 
                                             & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                >> 0x17U)) 
                                            == (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__datapath__DOT__IfId 
                                                           >> 0x22U)))) 
                                           | ((0x1fU 
                                               & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                  >> 0x17U)) 
                                              == (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__RbSelect)
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x27U))
                                                      : (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x1dU))))))) 
                                       | ((IData)(vlSelf->top__DOT__dcache_dataRequest) 
                                          & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                      | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                     | (IData)(vlSelf->top__DOT__transfer_in_progress)))));
    tracep->fullBit(oldp+619,((1U & (~ (((((0U != (0xfU 
                                                   & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                      >> 0xdU))) 
                                           & (((0x1fU 
                                                & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                   >> 0x17U)) 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__datapath__DOT__IfId 
                                                              >> 0x22U)))) 
                                              | ((0x1fU 
                                                  & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                     >> 0x17U)) 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__RbSelect)
                                                      ? (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x27U))
                                                      : (IData)(
                                                                (vlSelf->top__DOT__datapath__DOT__IfId 
                                                                 >> 0x1dU))))))) 
                                          | ((IData)(vlSelf->top__DOT__dcache_dataRequest) 
                                             & (~ (IData)(vlSelf->top__DOT__memory__DOT__dcache_controller__DOT__dcache_data_to_cpu_ready)))) 
                                         | (~ (IData)(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__icache_data_to_cpu_ready))) 
                                        | (IData)(vlSelf->top__DOT__transfer_in_progress))))));
    tracep->fullIData(oldp+620,(vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x22U)))]),32);
    tracep->fullIData(oldp+621,(((IData)(vlSelf->top__DOT__RbSelect)
                                  ? vlSelf->top__DOT__datapath__DOT__RF
                                 [(0x1fU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x27U)))]
                                  : vlSelf->top__DOT__datapath__DOT__RF
                                 [(0x1fU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0x1dU)))])),32);
    tracep->fullIData(oldp+622,(vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x18U)))]),32);
    tracep->fullBit(oldp+623,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_busy));
    tracep->fullBit(oldp+624,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port2_busy));
    tracep->fullBit(oldp+625,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__we));
    tracep->fullBit(oldp+626,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_dcache__DOT__re));
    tracep->fullBit(oldp+627,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__we));
    tracep->fullBit(oldp+628,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_interface_icache__DOT__re));
    tracep->fullBit(oldp+629,(1U));
    tracep->fullSData(oldp+630,(0U),12);
    tracep->fullSData(oldp+631,(vlSelf->top__DOT__datapath__DOT__datamem),12);
    tracep->fullBit(oldp+632,(vlSelf->top__DOT__memory__DOT__mem_ready_icache));
    tracep->fullBit(oldp+633,(0U));
    tracep->fullIData(oldp+634,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[0]),32);
    tracep->fullIData(oldp+635,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[1]),32);
    tracep->fullIData(oldp+636,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[2]),32);
    tracep->fullIData(oldp+637,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[3]),32);
    tracep->fullIData(oldp+638,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[4]),32);
    tracep->fullIData(oldp+639,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[5]),32);
    tracep->fullIData(oldp+640,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[6]),32);
    tracep->fullIData(oldp+641,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[7]),32);
    tracep->fullIData(oldp+642,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[8]),32);
    tracep->fullIData(oldp+643,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[9]),32);
    tracep->fullIData(oldp+644,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[10]),32);
    tracep->fullIData(oldp+645,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[11]),32);
    tracep->fullIData(oldp+646,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[12]),32);
    tracep->fullIData(oldp+647,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[13]),32);
    tracep->fullIData(oldp+648,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[14]),32);
    tracep->fullIData(oldp+649,(vlSelf->top__DOT__memory__DOT__dram_controller__DOT__dram_port1_write_data[15]),32);
    tracep->fullIData(oldp+650,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[0]),32);
    tracep->fullIData(oldp+651,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[1]),32);
    tracep->fullIData(oldp+652,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[2]),32);
    tracep->fullIData(oldp+653,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[3]),32);
    tracep->fullIData(oldp+654,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[4]),32);
    tracep->fullIData(oldp+655,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[5]),32);
    tracep->fullIData(oldp+656,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[6]),32);
    tracep->fullIData(oldp+657,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[7]),32);
    tracep->fullIData(oldp+658,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[8]),32);
    tracep->fullIData(oldp+659,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[9]),32);
    tracep->fullIData(oldp+660,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[10]),32);
    tracep->fullIData(oldp+661,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[11]),32);
    tracep->fullIData(oldp+662,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[12]),32);
    tracep->fullIData(oldp+663,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[13]),32);
    tracep->fullIData(oldp+664,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[14]),32);
    tracep->fullIData(oldp+665,(vlSelf->top__DOT__memory__DOT__icache_controller__DOT__mem_request_data[15]),32);
}

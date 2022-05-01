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
    tracep->declBit(c+77,"clock", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declBus(c+79,"Op", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+77,"clock", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declBus(c+79,"Op", false,-1, 7,0);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBus(c+6,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+7,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+8,"ALUOp2", false,-1);
    tracep->declBit(c+9,"RbSelect", false,-1);
    tracep->pushNamePrefix("ctr ");
    tracep->declBus(c+79,"Op", false,-1, 7,0);
    tracep->declBus(c+7,"AluSrc", false,-1, 1,0);
    tracep->declBus(c+6,"AluOp", false,-1, 3,0);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBit(c+8,"AluOp2", false,-1);
    tracep->declBit(c+9,"RbSelect", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath ");
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declBit(c+1,"MemRead", false,-1);
    tracep->declBit(c+2,"MemWrite", false,-1);
    tracep->declBus(c+4,"MemToReg", false,-1, 1,0);
    tracep->declBit(c+5,"RegWrite", false,-1);
    tracep->declBit(c+3,"PCSrc", false,-1);
    tracep->declBus(c+6,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+7,"ALUSrc", false,-1, 1,0);
    tracep->declBit(c+9,"RbSelect", false,-1);
    tracep->declBit(c+8,"ALUOp2", false,-1);
    tracep->declBus(c+79,"Op", false,-1, 7,0);
    tracep->declBus(c+10,"PC", false,-1, 6,0);
    tracep->declBus(c+83,"PCSTART", false,-1, 6,0);
    tracep->declBus(c+10,"instmem_address", false,-1, 6,0);
    tracep->declBus(c+11,"instmem_data", false,-1, 31,0);
    tracep->declBus(c+12,"datamem_address", false,-1, 6,0);
    tracep->declBus(c+13,"datamem_data", false,-1, 31,0);
    tracep->declBus(c+14,"datamem_write_data", false,-1, 31,0);
    tracep->declBus(c+15,"ForwardingA", false,-1, 1,0);
    tracep->declBus(c+16,"ForwardingB", false,-1, 1,0);
    tracep->declBit(c+17,"stall_flag", false,-1);
    tracep->declBit(c+18,"PCenable", false,-1);
    tracep->declBit(c+19,"IfIdEN", false,-1);
    tracep->declQuad(c+20,"IfId", false,-1, 38,0);
    tracep->declBus(c+22,"JumpAddress", false,-1, 18,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+45+i*1,"RF", true,(i+0), 31,0);
    }
    tracep->declBus(c+80,"da", false,-1, 31,0);
    tracep->declBus(c+81,"db", false,-1, 31,0);
    tracep->declBus(c+82,"dc", false,-1, 31,0);
    tracep->declBus(c+23,"RF_WriteData", false,-1, 31,0);
    tracep->declBus(c+24,"RF_WriteAddr", false,-1, 31,0);
    tracep->declArray(c+25,"IdEx", false,-1, 170,0);
    tracep->declBus(c+31,"alu1in_a", false,-1, 31,0);
    tracep->declBus(c+32,"alu1in_b", false,-1, 31,0);
    tracep->declBus(c+33,"alu1in_b_mux", false,-1, 31,0);
    tracep->declBus(c+34,"Alu1out", false,-1, 31,0);
    tracep->declArray(c+35,"ExMem", false,-1, 113,0);
    tracep->declBus(c+39,"alu2in_a", false,-1, 31,0);
    tracep->declBus(c+40,"alu2in_b", false,-1, 31,0);
    tracep->declBus(c+41,"Alu2out", false,-1, 31,0);
    tracep->declArray(c+42,"MemWb", false,-1, 78,0);
    tracep->popNamePrefix(2);
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
    tracep->fullBit(oldp+1,(vlSelf->top__DOT__MemRead));
    tracep->fullBit(oldp+2,(vlSelf->top__DOT__MemWrite));
    tracep->fullBit(oldp+3,(vlSelf->top__DOT__PCSrc));
    tracep->fullCData(oldp+4,(vlSelf->top__DOT__MemToReg),2);
    tracep->fullBit(oldp+5,(vlSelf->top__DOT__RegWrite));
    tracep->fullCData(oldp+6,(vlSelf->top__DOT__ALUOp),4);
    tracep->fullCData(oldp+7,(vlSelf->top__DOT__ALUSrc),2);
    tracep->fullBit(oldp+8,(vlSelf->top__DOT__ALUOp2));
    tracep->fullBit(oldp+9,(vlSelf->top__DOT__RbSelect));
    tracep->fullCData(oldp+10,(vlSelf->top__DOT__datapath__DOT__PC),7);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__datapath__DOT__instmem_data),32);
    tracep->fullCData(oldp+12,((0x7fU & (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                         >> 5U))),7);
    tracep->fullIData(oldp+13,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
    tracep->fullIData(oldp+14,(((vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                 << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                              >> 5U))),32);
    tracep->fullCData(oldp+15,(vlSelf->top__DOT__datapath__DOT__ForwardingA),2);
    tracep->fullCData(oldp+16,(vlSelf->top__DOT__datapath__DOT__ForwardingB),2);
    tracep->fullBit(oldp+17,(vlSelf->top__DOT__datapath__DOT__stall_flag));
    tracep->fullBit(oldp+18,(vlSelf->top__DOT__datapath__DOT__PCenable));
    tracep->fullBit(oldp+19,(vlSelf->top__DOT__datapath__DOT__IfIdEN));
    tracep->fullQData(oldp+20,(vlSelf->top__DOT__datapath__DOT__IfId),39);
    tracep->fullIData(oldp+22,((0x7ffffU & (IData)(
                                                   (vlSelf->top__DOT__datapath__DOT__IfId 
                                                    >> 0xfU)))),19);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__datapath__DOT__RF_WriteData),32);
    tracep->fullIData(oldp+24,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
    tracep->fullWData(oldp+25,(vlSelf->top__DOT__datapath__DOT__IdEx),171);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__datapath__DOT__alu1in_a),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
    tracep->fullIData(oldp+33,(((0U == (3U & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                 >> 0x1fU))))
                                 ? ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                     << 0x12U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                  >> 0xeU))
                                 : ((1U == (3U & ((
                                                   vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                   << 1U) 
                                                  | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                     >> 0x1fU))))
                                     ? ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                         << 0x12U) 
                                        | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                           >> 0xeU))
                                     : ((2U == (3U 
                                                & ((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                    << 1U) 
                                                   | (vlSelf->top__DOT__datapath__DOT__IdEx[4U] 
                                                      >> 0x1fU))))
                                         ? (0xfffffe00U 
                                            | (0x1ffU 
                                               & vlSelf->top__DOT__datapath__DOT__IdEx[0U]))
                                         : ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                             << 0x12U) 
                                            | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                               >> 0xeU)))))),32);
    tracep->fullIData(oldp+34,(((0x40000000U & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                 ? ((0x20000000U & 
                                     vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                     ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                        + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                     : ((0x10000000U 
                                         & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                         ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                            + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                         : ((0x8000000U 
                                             & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                             ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                + vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                             : ((0x1fU 
                                                 >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 ? 
                                                (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                 >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 : 0U))))
                                 : ((0x20000000U & 
                                     vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                     ? ((0x10000000U 
                                         & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                         ? ((0x8000000U 
                                             & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                             ? ((0x1fU 
                                                 >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 ? 
                                                (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                 >> vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 : 0U)
                                             : ((0x1fU 
                                                 >= vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 ? 
                                                (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                 << vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                                 : 0U))
                                         : ((0x8000000U 
                                             & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                             ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                & vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                             : (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                | vlSelf->top__DOT__datapath__DOT__alu1in_b)))
                                     : ((0x10000000U 
                                         & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                         ? ((0x8000000U 
                                             & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                             ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                ^ vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                             : (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                * vlSelf->top__DOT__datapath__DOT__alu1in_b))
                                         : ((0x8000000U 
                                             & vlSelf->top__DOT__datapath__DOT__IdEx[4U])
                                             ? (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                - vlSelf->top__DOT__datapath__DOT__alu1in_b)
                                             : (vlSelf->top__DOT__datapath__DOT__alu1in_a 
                                                + vlSelf->top__DOT__datapath__DOT__alu1in_b)))))),32);
    tracep->fullWData(oldp+35,(vlSelf->top__DOT__datapath__DOT__ExMem),114);
    tracep->fullIData(oldp+39,(((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                 << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                              >> 5U))),32);
    tracep->fullIData(oldp+40,(((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                 << 0x1bU) | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                              >> 5U))),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__datapath__DOT__Alu2out),32);
    tracep->fullWData(oldp+42,(vlSelf->top__DOT__datapath__DOT__MemWb),79);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
    tracep->fullIData(oldp+49,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    tracep->fullBit(oldp+77,(vlSelf->clock));
    tracep->fullBit(oldp+78,(vlSelf->reset));
    tracep->fullCData(oldp+79,(vlSelf->Op),8);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x1dU)))]),32);
    tracep->fullIData(oldp+81,(((IData)(vlSelf->top__DOT__RbSelect)
                                 ? vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x22U)))]
                                 : vlSelf->top__DOT__datapath__DOT__RF
                                [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                   >> 0x18U)))])),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x13U)))]),32);
    tracep->fullCData(oldp+83,(0U),7);
}

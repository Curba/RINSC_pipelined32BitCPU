// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->top__DOT__MemRead),4);
        tracep->chgCData(oldp+1,(vlSelf->top__DOT__MemWrite),4);
        tracep->chgBit(oldp+2,(vlSelf->top__DOT__PCSrc));
        tracep->chgCData(oldp+3,(vlSelf->top__DOT__MemToReg),2);
        tracep->chgBit(oldp+4,(vlSelf->top__DOT__RegWrite));
        tracep->chgCData(oldp+5,(vlSelf->top__DOT__ALUOp),4);
        tracep->chgCData(oldp+6,(vlSelf->top__DOT__ALUSrc),2);
        tracep->chgBit(oldp+7,(vlSelf->top__DOT__ALUOp2));
        tracep->chgBit(oldp+8,(vlSelf->top__DOT__RbSelect));
        tracep->chgBit(oldp+9,(vlSelf->top__DOT__MemSignExtend));
        tracep->chgCData(oldp+10,(vlSelf->top__DOT__branch_flag),2);
        tracep->chgBit(oldp+11,(vlSelf->top__DOT__jump_flag));
        tracep->chgBit(oldp+12,(vlSelf->top__DOT__double_jump_flag));
        tracep->chgCData(oldp+13,(vlSelf->top__DOT__datapath__DOT__PC),7);
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__datapath__DOT__instmem_data),32);
        tracep->chgCData(oldp+15,((0x7fU & ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                             << 4U) 
                                            | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                               >> 0x1cU)))),7);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__datapath__DOT__datamem_data),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__datapath__DOT__datamem_write_data),32);
        tracep->chgCData(oldp+18,(vlSelf->top__DOT__datapath__DOT__ForwardingA),2);
        tracep->chgCData(oldp+19,(vlSelf->top__DOT__datapath__DOT__ForwardingB),2);
        tracep->chgBit(oldp+20,(((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                    >> 7U) & (0U != 
                                              (0x1fU 
                                               & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                  & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                               >> 0x17U)) 
                                     != (0x1fU & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                  >> 0x16U)))) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x12U))))));
        tracep->chgBit(oldp+21,(((0U != (0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])) 
                                 & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                    == (0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                 >> 0x17U))))));
        tracep->chgBit(oldp+22,(vlSelf->top__DOT__datapath__DOT__stall_flag));
        tracep->chgBit(oldp+23,(vlSelf->top__DOT__datapath__DOT__PCenable));
        tracep->chgBit(oldp+24,(vlSelf->top__DOT__datapath__DOT__IfIdEN));
        tracep->chgBit(oldp+25,(vlSelf->top__DOT__datapath__DOT__flush));
        tracep->chgCData(oldp+26,((3U & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                         >> 0x10U))),2);
        tracep->chgCData(oldp+27,((3U & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                         >> 0xfU))),2);
        tracep->chgQData(oldp+28,(vlSelf->top__DOT__datapath__DOT__IfId),39);
        tracep->chgIData(oldp+30,((0x7ffffU & (IData)(
                                                      (vlSelf->top__DOT__datapath__DOT__IfId 
                                                       >> 0xfU)))),19);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__datapath__DOT__RF_WriteData),32);
        tracep->chgIData(oldp+32,((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U])),32);
        tracep->chgBit(oldp+33,((((1U == ((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                           << 4U) | 
                                          (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                           >> 0x1cU))) 
                                  & vlSelf->top__DOT__datapath__DOT__ExMem[0U])
                                  ? 1U : 0U)));
        tracep->chgWData(oldp+34,(vlSelf->top__DOT__datapath__DOT__IdEx),197);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__datapath__DOT__alu1in_a),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__datapath__DOT__alu1in_b),32);
        tracep->chgIData(oldp+43,(((0U == (3U & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                 >> 0x14U)))
                                    ? ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                  >> 0x1cU))
                                    : ((1U == (3U & 
                                               (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                >> 0x14U)))
                                        ? ((vlSelf->top__DOT__datapath__DOT__IdEx[1U] 
                                            << 4U) 
                                           | (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                              >> 0x1cU))
                                        : ((2U == (3U 
                                                   & (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                                      >> 0x14U)))
                                            ? (0x1fU 
                                               & (vlSelf->top__DOT__datapath__DOT__IdEx[0U] 
                                                  >> 0x12U))
                                            : ((vlSelf->top__DOT__datapath__DOT__IdEx[3U] 
                                                << 4U) 
                                               | (vlSelf->top__DOT__datapath__DOT__IdEx[2U] 
                                                  >> 0x1cU)))))),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__datapath__DOT__Alu1out),32);
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__datapath__DOT__zero_flag));
        tracep->chgCData(oldp+46,((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x17U))),5);
        tracep->chgCData(oldp+47,((0x1fU & vlSelf->top__DOT__datapath__DOT__IdEx[6U])),5);
        tracep->chgCData(oldp+48,((vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                   >> 0x1bU)),5);
        tracep->chgWData(oldp+49,(vlSelf->top__DOT__datapath__DOT__ExMem),144);
        tracep->chgIData(oldp+54,(((vlSelf->top__DOT__datapath__DOT__ExMem[3U] 
                                    << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[2U] 
                                              >> 0x1cU))),32);
        tracep->chgIData(oldp+55,((((((vlSelf->top__DOT__datapath__DOT__MemWb[2U] 
                                       >> 7U) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__datapath__DOT__MemWb[0U]))) 
                                     & ((0x1fU & (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                  >> 0x17U)) 
                                        != (0x1fU & 
                                            (vlSelf->top__DOT__datapath__DOT__IdEx[5U] 
                                             >> 0x16U)))) 
                                    & ((0x1fU & vlSelf->top__DOT__datapath__DOT__MemWb[0U]) 
                                       == (0x1fU & 
                                           (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                            >> 0x12U))))
                                    ? vlSelf->top__DOT__datapath__DOT__RF_WriteData
                                    : ((vlSelf->top__DOT__datapath__DOT__ExMem[1U] 
                                        << 4U) | (vlSelf->top__DOT__datapath__DOT__ExMem[0U] 
                                                  >> 0x1cU)))),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__datapath__DOT__Alu2out),32);
        tracep->chgBit(oldp+57,(vlSelf->top__DOT__datapath__DOT__branch_src));
        tracep->chgBit(oldp+58,(((IData)((0x10000U 
                                          == (0x38000U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                  ? 1U : 0U)));
        tracep->chgBit(oldp+59,(((IData)((0x28000U 
                                          == (0x38000U 
                                              & vlSelf->top__DOT__datapath__DOT__ExMem[0U])))
                                  ? 1U : 0U)));
        tracep->chgWData(oldp+60,(vlSelf->top__DOT__datapath__DOT__MemWb),79);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__datapath__DOT__RF[0]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__datapath__DOT__RF[1]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__datapath__DOT__RF[2]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__datapath__DOT__RF[3]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__datapath__DOT__RF[4]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__datapath__DOT__RF[5]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__datapath__DOT__RF[6]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__datapath__DOT__RF[7]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__datapath__DOT__RF[8]),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__datapath__DOT__RF[9]),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__datapath__DOT__RF[10]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__datapath__DOT__RF[11]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__datapath__DOT__RF[12]),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__datapath__DOT__RF[13]),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__datapath__DOT__RF[14]),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__datapath__DOT__RF[15]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__datapath__DOT__RF[16]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__datapath__DOT__RF[17]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__datapath__DOT__RF[18]),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__datapath__DOT__RF[19]),32);
        tracep->chgIData(oldp+83,(vlSelf->top__DOT__datapath__DOT__RF[20]),32);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__datapath__DOT__RF[21]),32);
        tracep->chgIData(oldp+85,(vlSelf->top__DOT__datapath__DOT__RF[22]),32);
        tracep->chgIData(oldp+86,(vlSelf->top__DOT__datapath__DOT__RF[23]),32);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__datapath__DOT__RF[24]),32);
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__datapath__DOT__RF[25]),32);
        tracep->chgIData(oldp+89,(vlSelf->top__DOT__datapath__DOT__RF[26]),32);
        tracep->chgIData(oldp+90,(vlSelf->top__DOT__datapath__DOT__RF[27]),32);
        tracep->chgIData(oldp+91,(vlSelf->top__DOT__datapath__DOT__RF[28]),32);
        tracep->chgIData(oldp+92,(vlSelf->top__DOT__datapath__DOT__RF[29]),32);
        tracep->chgIData(oldp+93,(vlSelf->top__DOT__datapath__DOT__RF[30]),32);
        tracep->chgIData(oldp+94,(vlSelf->top__DOT__datapath__DOT__RF[31]),32);
    }
    tracep->chgBit(oldp+95,(vlSelf->clock));
    tracep->chgBit(oldp+96,(vlSelf->reset));
    tracep->chgCData(oldp+97,(vlSelf->Op),8);
    tracep->chgIData(oldp+98,(vlSelf->top__DOT__datapath__DOT__RF
                              [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                 >> 0x1dU)))]),32);
    tracep->chgIData(oldp+99,(((IData)(vlSelf->top__DOT__RbSelect)
                                ? vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x22U)))]
                                : vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x18U)))])),32);
    tracep->chgIData(oldp+100,(vlSelf->top__DOT__datapath__DOT__RF
                               [(0x1fU & (IData)((vlSelf->top__DOT__datapath__DOT__IfId 
                                                  >> 0x13U)))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

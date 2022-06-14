// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128___024root.h"

VL_ATTR_COLD void Vtest_aes_128___024root___eval_initial(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtest_aes_128___024root___eval_settle(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vtest_aes_128___024root___final(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___final\n"); );
}

VL_ATTR_COLD void Vtest_aes_128___024root___ctor_var_reset(Vtest_aes_128___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_aes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_aes_128___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_128.h for the primary calling header

#include "verilated.h"

#include "Vaes_128_T.h"

VL_ATTR_COLD void Vaes_128_T___ctor_var_reset(Vaes_128_T* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vaes_128_T___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in = VL_RAND_RESET_I(8);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__s4____pinNumber3 = VL_RAND_RESET_I(8);
}

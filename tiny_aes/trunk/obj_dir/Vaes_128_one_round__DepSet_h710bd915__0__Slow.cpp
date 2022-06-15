// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_128.h for the primary calling header

#include "verilated.h"

#include "Vaes_128_one_round.h"

VL_ATTR_COLD void Vaes_128_one_round___ctor_var_reset(Vaes_128_one_round* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_128_one_round___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->state_in);
    VL_RAND_RESET_W(128, vlSelf->key);
    VL_RAND_RESET_W(128, vlSelf->state_out);
}

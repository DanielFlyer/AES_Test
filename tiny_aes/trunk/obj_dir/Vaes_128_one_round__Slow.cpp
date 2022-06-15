// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_128.h for the primary calling header

#include "verilated.h"

#include "Vaes_128__Syms.h"
#include "Vaes_128_one_round.h"

void Vaes_128_one_round___ctor_var_reset(Vaes_128_one_round* vlSelf);

Vaes_128_one_round::Vaes_128_one_round(Vaes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_128_one_round___ctor_var_reset(this);
}

void Vaes_128_one_round::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaes_128_one_round::~Vaes_128_one_round() {
}

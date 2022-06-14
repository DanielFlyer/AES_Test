// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128__Syms.h"
#include "Vtest_aes_128_one_round.h"

void Vtest_aes_128_one_round___ctor_var_reset(Vtest_aes_128_one_round* vlSelf);

Vtest_aes_128_one_round::Vtest_aes_128_one_round(Vtest_aes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_aes_128_one_round___ctor_var_reset(this);
}

void Vtest_aes_128_one_round::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_aes_128_one_round::~Vtest_aes_128_one_round() {
}

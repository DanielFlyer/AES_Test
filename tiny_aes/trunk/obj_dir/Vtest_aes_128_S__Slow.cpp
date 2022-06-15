// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128_S.h"
#include "Vtest_aes_128__Syms.h"

void Vtest_aes_128_S___ctor_var_reset(Vtest_aes_128_S* vlSelf);

Vtest_aes_128_S::Vtest_aes_128_S(Vtest_aes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_aes_128_S___ctor_var_reset(this);
}

void Vtest_aes_128_S::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_aes_128_S::~Vtest_aes_128_S() {
}

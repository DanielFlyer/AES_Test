// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128_T.h"
#include "Vtest_aes_128__Syms.h"

void Vtest_aes_128_T___ctor_var_reset(Vtest_aes_128_T* vlSelf);

Vtest_aes_128_T::Vtest_aes_128_T(Vtest_aes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_aes_128_T___ctor_var_reset(this);
}

void Vtest_aes_128_T::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_aes_128_T::~Vtest_aes_128_T() {
}

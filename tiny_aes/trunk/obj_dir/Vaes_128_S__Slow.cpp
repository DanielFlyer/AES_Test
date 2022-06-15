// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_128.h for the primary calling header

#include "verilated.h"

#include "Vaes_128_S.h"
#include "Vaes_128__Syms.h"

void Vaes_128_S___ctor_var_reset(Vaes_128_S* vlSelf);

Vaes_128_S::Vaes_128_S(Vaes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_128_S___ctor_var_reset(this);
}

void Vaes_128_S::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaes_128_S::~Vaes_128_S() {
}

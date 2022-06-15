// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_aes_128.h for the primary calling header

#ifndef VERILATED_VTEST_AES_128_T_H_
#define VERILATED_VTEST_AES_128_T_H_  // guard

#include "verilated.h"

class Vtest_aes_128__Syms;
class Vtest_aes_128_S;

VL_MODULE(Vtest_aes_128_T) {
  public:
    // CELLS
    Vtest_aes_128_S* __PVT__s0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__in,7,0);
    CData/*7:0*/ __Vcellout__s4____pinNumber3;
    VL_OUT(__PVT__out,31,0);

    // INTERNAL VARIABLES
    Vtest_aes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_aes_128_T(Vtest_aes_128__Syms* symsp, const char* name);
    ~Vtest_aes_128_T();
    VL_UNCOPYABLE(Vtest_aes_128_T);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

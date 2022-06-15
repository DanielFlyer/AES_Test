// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_128.h for the primary calling header

#ifndef VERILATED_VAES_128_T_H_
#define VERILATED_VAES_128_T_H_  // guard

#include "verilated.h"

class Vaes_128__Syms;
class Vaes_128_S;

VL_MODULE(Vaes_128_T) {
  public:
    // CELLS
    Vaes_128_S* __PVT__s0;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__in,7,0);
    CData/*7:0*/ __Vcellout__s4____pinNumber3;
    VL_OUT(__PVT__out,31,0);

    // INTERNAL VARIABLES
    Vaes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_128_T(Vaes_128__Syms* symsp, const char* name);
    ~Vaes_128_T();
    VL_UNCOPYABLE(Vaes_128_T);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST_AES_128__SYMS_H_
#define VERILATED_VTEST_AES_128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtest_aes_128.h"

// INCLUDE MODULE CLASSES
#include "Vtest_aes_128___024root.h"

// SYMS CLASS (contains all model state)
class Vtest_aes_128__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest_aes_128* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest_aes_128___024root        TOP;

    // CONSTRUCTORS
    Vtest_aes_128__Syms(VerilatedContext* contextp, const char* namep, Vtest_aes_128* modelp);
    ~Vtest_aes_128__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

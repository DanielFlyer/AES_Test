// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_192__SYMS_H_
#define VERILATED_VAES_192__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_192.h"

// INCLUDE MODULE CLASSES
#include "Vaes_192___024root.h"

// SYMS CLASS (contains all model state)
class Vaes_192__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_192* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_192___024root             TOP;

    // CONSTRUCTORS
    Vaes_192__Syms(VerilatedContext* contextp, const char* namep, Vaes_192* modelp);
    ~Vaes_192__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

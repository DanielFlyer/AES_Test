// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_aes_128__Syms.h"
#include "Vtest_aes_128.h"
#include "Vtest_aes_128___024root.h"

// FUNCTIONS
Vtest_aes_128__Syms::~Vtest_aes_128__Syms()
{
}

Vtest_aes_128__Syms::Vtest_aes_128__Syms(VerilatedContext* contextp, const char* namep,Vtest_aes_128* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

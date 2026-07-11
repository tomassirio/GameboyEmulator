#ifndef OP_CODE_H
#define OP_CODE_H

#include "instructions.h" 
#include "operand.h"

typedef struct {
    Instruction instruction;

    Operand dst;
    Operand src;

    uint8_t cycles;
} OP_CODE;


extern OP_CODE opcode_table[256];

#endif

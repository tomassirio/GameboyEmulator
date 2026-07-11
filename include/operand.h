#ifndef OPERAND_H
#define OPERAND_H

#include "cpu.h"

typedef enum {
    REG_A,
    REG_B,
    REG_C,
    REG_D,
    REG_E,
    REG_F,
    REG_H,
    REG_L,
    REG_HL,
    IMM_8,
    IMM_16
} Operand;

uint8_t read_operand(CPU *cpu, Operand operand);

void write_operand(
    CPU *cpu,
    Operand operand,
    uint8_t value
);

#endif 

#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "cpu.h"
#include "operand.h"

typedef void (*Instruction)(CPU *cpu, Operand dst, Operand src);

void instruction_NOOP(CPU *cpu, Operand dst, Operand src);
void instruction_LD(CPU *cpu, Operand dst, Operand src); 

#endif

#include "include/instructions.h"
#include "include/operand.h"

void instruction_NOOP(CPU *cpu, Operand dst, Operand src) {
    return;
}

void instruction_LD(CPU *cpu, Operand dst, Operand src) {
    uint8_t value = read_operand(cpu, src);
    write_operand(cpu, dst, value);    
    return;
}



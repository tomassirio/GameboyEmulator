#include "include/operand.h"

uint8_t read_operand(CPU *cpu, Operand operand) {
    switch(operand) {
        case REG_A: return cpu->registers->a; 
        case REG_B: return cpu->registers->b; 
        case REG_C: return cpu->registers->c;
        case REG_D: return cpu->registers->d; 
        case REG_E: return cpu->registers->e; 
        case REG_F: return cpu->registers->f; 
        case REG_H: return cpu->registers->h; 
        case REG_L: return cpu->registers->l; 

        case IMM_8: return (*cpu->ram)[cpu->registers->pc++];
        default: return 0;
    }
}

void write_operand(
    CPU *cpu,
    Operand operand,
    uint8_t value
) {
    switch(operand) {
        case REG_A: cpu->registers->a = value; break;
        case REG_B: cpu->registers->b = value; break;
        case REG_C: cpu->registers->c = value; break;
        case REG_D: cpu->registers->d = value; break;
        case REG_E: cpu->registers->e = value; break;
        case REG_F: cpu->registers->f = value; break;
        case REG_H: cpu->registers->h = value; break;
        case REG_L: cpu->registers->l = value; break;
        default: return;
    }
    return;
}



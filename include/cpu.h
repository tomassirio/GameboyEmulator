#ifndef CPU_H
#define CPU_H

#include <stdio.h>
#include <stdint.h>

#define Z_FLAG_MASK 0x80            // Zero Flag Mask:         Set on math op = 0
#define N_FLAG_MASK 0x40            // Subtract Flag Mask:     If subtraction was performed => 1
#define H_FLAG_MASK 0x20            // Half Carry Flag Mask:   Occurred in lower nibble in the last math operation
#define C_FLAG_MASK 0x10            // Carry Flag Mask:        Carry occurred in last math op or if reg A is the smaller value when exec the CP instr

typedef uint8_t RAM[8192];         // RAM: 8Kb
typedef uint8_t Video_RAM[8192];   // Video RAM 8Kb

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t f;
    uint8_t h;
    uint8_t l;
    uint8_t flag;
    uint16_t sp;
    uint16_t pc;
} Registers;

typedef struct {
    Registers *registers;
    RAM *ram;
    Video_RAM *v_ram;
} CPU;

int runCycle(CPU *cpu);

#endif

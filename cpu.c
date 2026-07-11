#include "include/cpu.h"
#include "include/op_code.h"

uint16_t fetch(CPU *cpu);
OP_CODE decode(uint16_t instruction);
int execute(OP_CODE op_code, CPU *cpu);


uint16_t fetch(CPU *cpu) {
    uint16_t pc = cpu->registers->pc;
    uint8_t instruction = (*cpu->ram)[pc];

    return instruction;
}

OP_CODE decode(uint16_t instruction) {
    return opcode_table[instruction];
}

int execute(OP_CODE op_code, CPU *cpu) {
    Operand dst = op_code.dst;
    Operand src = op_code.src;
    op_code.instruction(cpu, dst, src);
    return op_code.cycles;
}

int runCycle(CPU *cpu) {
    uint16_t fetch_result = fetch(cpu);
    OP_CODE op_code = decode(fetch_result);
    int cycles = execute(op_code, cpu);
    printf("Fetch Result: 0x%x\n", fetch_result);
    printf("Op Code - Instruction: %p\n", op_code.instruction);
    printf("Op Code - dst: %u\n", op_code.dst);
    printf("Op Code - src: %u\n", op_code.src);
    printf("Op Code - cycles: %u\n", op_code.cycles);
    return 0;
}

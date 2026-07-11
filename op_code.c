#include "include/op_code.h"

OP_CODE opcode_table[256] = {
    [0x00] = {
        instruction_NOOP,
        0,
        0,
        4
    },

    [0x06] = {
        instruction_LD,
        REG_B,
        IMM_8,
        8
    }
};

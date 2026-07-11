#include <stdio.h>
#include "include/cpu.h"

int main() {
    Registers tuvi = {0};
    RAM ram = {0};
    Video_RAM v_ram = {0};
    CPU cpu = {&tuvi, &ram, &v_ram};
    runCycle(&cpu);
    
    return 0;
}

#include <stdio.h>
#include "include/cpu.h"

int main() {
    Registers tuvi;
    RAM ram;
    Video_RAM v_ram;
    CPU cpu = {&tuvi, &ram, &v_ram};
    runCycle(&cpu);
    
    return 0;
}

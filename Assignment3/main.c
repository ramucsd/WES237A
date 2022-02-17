#include "./CycleCount.h"
#include <unistd.h>

unsigned int getCC(void){
    return get_cyclecount();
}

void init(int32_t reset, int32_t divisor_en){
    init_counters(reset,divisor_en);
}
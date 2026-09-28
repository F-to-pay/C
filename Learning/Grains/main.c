#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

uint64_t square(uint8_t index){
    if (index == 0) return 0;
    if (index > 64) return 0;
    uint64_t tempSquare = (uint64_t)1 << (index - 1);
    return tempSquare;
}

uint64_t total(void){
    uint64_t tempSum = 0; 
    for (int i = 1; i <= 64; i++) tempSum += square(i);
    return tempSum;
}
int main(void){
    for (int i = 0; i <= 64; i++) printf("%" PRIu64 "\n",square(i));
    printf("%" PRIu64 "\n", total());
}
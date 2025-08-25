#include <stdio.h>
#include "grains.h"

int main(void) {
    for(uint8_t i = 1; i <= 64; i++) {
        printf("Square %d has %llu grain(s)\n", i, square(i));
    }

    printf("Total grains: %llu\n", total());
    return 0;
}
#include <stdio.h>
#include "addition.h"

int main(void) {
    printf("2 + 3 = %d\n", add(2, 3));
    printf("10 + 42 = %d\n", add(10, 42));
    return 0;
}
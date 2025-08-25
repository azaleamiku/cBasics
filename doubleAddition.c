#include <stdio.h>
#include "addition.h"
#include "double.h"

int main(void) {
    int x = 4;
    int y = 7;

    printf("%d doubled is %d\n", x, double_number(x));
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}
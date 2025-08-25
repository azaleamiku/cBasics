#include <stdio.h>
#include "double.h"

int main(void) {
    for (int i = 1; i <= 10; i++) {
        printf("%d doubled is %d\n", i, double_number(i));
    }
    return 0;
}

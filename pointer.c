#include <stdio.h>

void setToFive(int *n) {
    *n = 5;
}

int main(void) {
    int x = 10;
    int *ptr = &x;
    
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
    *ptr = 20;
    printf("x after *ptr = 20: %d\n", x);
    
    setToFive(&x);
    printf("x after setToFive: %d\n", x);
    
    return 0;
}
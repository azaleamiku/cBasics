#include <stdio.h>

int findMax(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findMin(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}

int main(void) {
    int a = 10;
    int b = 20;

    int maximum = findMax(a, b);
    int minimum = findMin(a, b);

    printf("%d is the Max\n", maximum);
    printf("%d is the Min\n", minimum);

    return 0;
}
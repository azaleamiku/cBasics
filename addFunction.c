#include <stdio.h>

int add(int num1, int num2);


int main() {

    int a = 5;
    int b = 3;
    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);

    printf("Also 7 + 8 is %d\n", add(7, 8));

    return 0;
}

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}
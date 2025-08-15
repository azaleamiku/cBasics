#include <stdio.h>

int main() {

    int num1;
    int num2;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int quo = num1 / num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("The difference of %d and %d is %d\n", num1, num2, diff);
    printf("The product of of %d and %d is %d\n", num1, num2, prod);
    printf("The quotient of %d and %d is %d\n", num1, num2, quo);

    return 0;
}
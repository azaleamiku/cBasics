#include <stdio.h>

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiplication(int num1, int num2);
float division(int num1, int num2);

int main() {
    int n1;
    printf("Enter your first number to be calculated: ");
    scanf("%d", &n1);

    char op;
    printf("What is the operation? [+, -, *, /] ");
    scanf(" %c", &op);

    int n2;
    printf("Enter your second number: ");
    scanf("%d", &n2);

    if (op == '+') {
        printf("%d + %d = %d\n", n1, n2, addition(n1, n2));
    } else if (op == '-') {
        printf("%d - %d = %d\n", n1, n2, subtraction(n1, n2));
    } else if (op == '*') {
        printf("%d x %d = %d\n", n1, n2, multiplication(n1, n2));
    } else if (op == '/') {
        if (n2 != 0) {
        printf("%d / %d = %d", n1, n2, division(n1, n2));
    } else {
        printf("Error: Cannot divide by zero!\n");
    }

} else {
    printf("Error: Invalid operation.");
}
return 0;
}

int addition(int num1, int num2) {
    return num1 + num2;
}

int subtraction(int num1, int num2) {
    return num1 - num2;
}

int multiplication(int num1, int num2) {
    return num1 * num2;
}

float division(int num1, int num2) {
    return (float)num1 / num2;
}


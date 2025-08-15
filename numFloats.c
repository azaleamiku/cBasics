#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 3;
    float float_num1 = 10.0;

    int int_division_result = num1 / num2;
    float float_division_result = float_num1 / num2;

    printf("%d\n", int_division_result);
    printf("%f\n", float_division_result);

    return 0;

}
#include <stdio.h>

int sub(int num1, int num2);

int main() {

    printf("If you subtract 3 from 5, it is %d\n", sub(5, 3));

}

int sub(int num1, int num2) {
    int result = num1 - num2;
    return result;
}
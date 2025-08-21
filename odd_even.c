#include <stdio.h>

int main() {
    int num;

    printf("Give me a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input!\n");
        return 1; 
    }

    if (num % 2 == 0) {
        printf("The number is even!\n");
    } else {
        printf("The number is odd!\n");
    }

    return 0;
}
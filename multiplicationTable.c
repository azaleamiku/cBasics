#include <stdio.h>

int main() {

    int number;

    printf("Give me a number: ");
    scanf("%d", &number);

    for (int i = 1; i < 11; i++) {
        int product = number * i;

        printf("%d x %d = %d\n", number, i, product);
    }
}
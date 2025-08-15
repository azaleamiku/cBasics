#include <stdio.h>

int main() {
    int num;

    printf("Give me a number: ");
    scanf("%d", &num);

    int result = num % 2;

    if (result == 0) {
        printf("The number you have given is an even number!\n");
    } else {
        printf("This number is an odd number!\n");
    }

    return 0;
    
}
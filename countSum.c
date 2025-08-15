#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int i;

    printf("Enter a positive whole number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive whole number.\n");
        return 1; 
    }

    for (i = 1; i <= num; i++) {
        sum += i; 
    }

    printf("The sum of whole numbers from 1 to %d is: %d\n", num, sum);

    return 0; 
}
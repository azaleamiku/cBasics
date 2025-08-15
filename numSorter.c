#include <stdio.h>

int main() {
    int num[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

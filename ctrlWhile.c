#include <stdio.h>

int main() {

    char choice;

    printf("Do you want to say 'Hello'? [y] or [n]: ");
    scanf("%c", &choice);

    while (choice == 'y' || choice == 'Y') {
        printf("Hello!\n");
        printf("Do you want to say 'Hello' again? [y] or [n]: ");
        scanf(" %c", &choice);
    }
    printf("Alright, bye!\n");

    return 0;
}
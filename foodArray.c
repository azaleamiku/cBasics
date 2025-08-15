#include <stdio.h>

int main() {
    char favFood1[50];
    char favFood2[50];
    char favFood3[50];
    
    printf("What is your first favorite food? ");
    fgets(favFood1, sizeof(favFood1), stdin);

    printf("What is your second favorite food? ");
    fgets(favFood2, sizeof(favFood2), stdin);

    printf("What is your third favorite food? ");
    fgets(favFood3, sizeof(favFood3), stdin);

    printf("Your favorite foods are %s, %s and %s.\n", favFood1, favFood2, favFood3);
    
    return 0;
}
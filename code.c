#include <stdio.h>

int main() {
    int secretCode = 0000;
    int userCode;

    printf("Enter your code: ");
    scanf("%d", &userCode);

    if (userCode == secretCode) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    return 0;
    
}
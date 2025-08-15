#include <stdio.h>

void greetUser(char name[]);

int main() {

    char userName[50];
    printf("What is your name? ");
    scanf("%s", &userName);

    greetUser(userName);

    printf("\n");


}

void greetUser(char name[]) {
    printf("Hello %s, Welcome to my program.\n", name);
}
#include <stdio.h>

int main() {
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    char name[50];

    printf("What's your name btw? ");
    scanf("%s", &name);

    printf("So you're %s, and you are %d.\n", name, age);

    return 0;
}
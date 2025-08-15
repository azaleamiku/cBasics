#include <stdio.h>

int main() {
    int grade;

    printf("Enter a Grade number: ");
    scanf("%d", &grade);

    if (grade == 100) {
        printf("You ACED it!\n");
    } else if (grade >= 90) {
        printf("That's an A!\n");
    } else if (grade >= 80) {
        printf("That's a B!\n");
    } else if (grade >= 70) {
        printf("That's a C!\n");
    } else if (grade >= 60) {
        printf("That's a D!\n");
    } else {
        printf("You Failed.\n");
    }
}
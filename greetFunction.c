#include <stdio.h>

void greetUser(char userName[]);
void userAge(int age); 

int main() {
    char name[50];
    printf("What is your name? ");
    scanf("%49s", name); 

    int num;
    printf("What is your age? ");
    scanf("%d", &num);

    greetUser(name);  
    userAge(num);   

    return 0;
}

void greetUser(char userName[]) {  
    printf("Hello %s\n", userName);
}

void userAge(int age) {  
    printf("Your age is %d\n", age);
}

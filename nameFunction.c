#include <stdio.h>

void call(char n[]);

int main() {
    char name[50] = "Jian";
    call(name);
}

void call(char n[]) {
    printf("Hey %s!\n", n);
}
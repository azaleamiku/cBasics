#include <stdio.h>

int a, b;

void add() 
{
    printf("%d", a + b);
}

int main()
{
    a = 10;
    b = 2;

    add();

    return 0;
}
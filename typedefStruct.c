#include <stdio.h>

typedef struct {
    int a;
} str1;

typedef struct {
    int x;
} str2;

int main(void) {
    str1 var1 = { 20 };
    str2 var2 = { 314 };

    printf("var1.a = %d\n", var1.a);
    printf("var2.x = %d\n", var2.x);

    return 0;
}
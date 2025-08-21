#include <stdio.h>

int main(void) {
    int n[5] = {1, 2, 3, 4, 5};
    int i = 4;

    for (i < 0; i--;) {
        printf("%d\n", n[i]);
    }
    
}
#include <stdio.h>
#include <math.h>

int main(void) {
    float x = 6.4;
    float y = 1.5;
    float z = 5.4;
    int a = 2;

    x = round(x);
    y = ceil(y); 
    z = floor(z); 

    printf("%.1f\n", x);
    printf("%.1f\n", y);
    printf("%.1f\n", z);
}
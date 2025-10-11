#include <stdio.h>

int main(void) {
    float toF =  1.8;
    float toC = 0.556;
    double result;

    float temp;

    int entry;

    printf("Enter a temperature: ");
    scanf("%f", &temp);

    printf("[1]C to F\n[2]F to C\nSelect Temperature Conversion: ");
    scanf("%d", &entry);

    if(entry == 1) {
        result = temp * 1.8 + 32;
    } else if (entry == 2) {
        result = temp - 32 * 0.556;
    }

    printf("%.2f Celsius converted to Farenheit is %.2f\n", temp, result);


}
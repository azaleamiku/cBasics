#include <stdio.h>

int main() {
    float length;
    float width;

    printf("Length: ");
    scanf("%f", &length);

    printf("Width: ");
    scanf("%f", &width);

    float area = length * width;

    printf("Based on the measurements of the rectangle that you gave, the area of the rectangle is %.2f\n", area);
    
    return 0;

}
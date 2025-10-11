#include <stdio.h>

#define PI 3.14159

int main(void) {
    double radius;
    double area;
    double circumference;

    printf("Enter the Radius of the Circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("The Area of the Circle is %lf and the Circumference of the Circle is %lf\n", area, circumference);
}
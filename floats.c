#include <stdio.h> 

int main() {
    int num1 = 20;
    int num2 = 7;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2; 
    int remainder = num1 % num2;

    printf("--- Integer Math with %d and %d ---\n", num1, num2);
    printf("Sum:         %d + %d = %d\n", num1, num2, sum);
    printf("Difference:  %d - %d = %d\n", num1, num2, difference);
    printf("Product:     %d * %d = %d\n", num1, num2, product);
    printf("Quotient (int): %d / %d = %d (Whole Number)\n", num1, num2, quotient);
    printf("Remainder:   %d %% %d = %d\n", num1, num2, remainder); 
    printf("\n"); 

    float price = 15.75;
    float discount = 0.20; 

    float discountAmount = price * discount;
    float finalPrice = price - discountAmount;

    printf("--- Floating Point Math ---\n");
    printf("Original Price: $%.2f\n", price);
    printf("Discount (20%%): $%.2f\n", discountAmount); 
    printf("Final Price:    $%.2f\n", finalPrice);

    printf("\n");

    int complexCalc1 = 10 + 5 * 2;   
    int complexCalc2 = (10 + 5) * 2; 

    printf("--- Order of Operations ---\n");
    printf("10 + 5 * 2   = %d\n", complexCalc1);
    printf("(10 + 5) * 2 = %d\n", complexCalc2);

    return 0;
}
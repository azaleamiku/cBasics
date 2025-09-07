#include <stdio.h>
#include <string.h>

int main(void) {

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What do you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price of the %s?: ", item);
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Number of %s(s): %d", item, quantity);
    printf("\nTotal: %c%.2f\n", currency, total);

    return 0;
}
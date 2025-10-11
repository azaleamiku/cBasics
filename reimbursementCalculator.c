#include <stdio.h>

#define MILEAGE_REIMBURSEMENT_RATE 0.35

int main(void) {
    float mile;
    float result;

    printf("Welcome to the Reimbursement Calculator\n");
    printf("Enter mileage: ");
    scanf("%f", &mile);

    result = mile * MILEAGE_REIMBURSEMENT_RATE;

    printf("You traveled: %.2f at %.2f per mile.\n", mile, MILEAGE_REIMBURSEMENT_RATE);
    printf("Your reimbursement rate is %.2f.\n", result);

    return 0;

}
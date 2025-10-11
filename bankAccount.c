#include <stdio.h>

int main(void) {
    double balance = 0.0;
    int choice;
    double amount;

    do {
        printf("\n--- Bank Account Menu ---\n");
        printf("[1] Check Balance\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)  {
            case 1: 
                printf("Your current balance is: $%.2f\n.");
                break;
            case 2: 
                printf("Enter amount to deposit: $");
                scanf("%lf", &amount);
                    if(amount > 0) {
                        balance += amount;
                        printf("Deposit successful. New balance: $%.2f\n", balance);
                    } else {
                        printf("Invalid input.");
                    }
                break;
            case 3: 
                printf("Enter amount to withdraw: $");
                scanf("%lf", &amount);
                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful. New balance $%.2f", balance);
                } else if(amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    printf("Invalid input.\n");
                }
                break;
            case 4:
                printf("Thank you for banking with us.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    while (choice != 4);

    return 0;
}
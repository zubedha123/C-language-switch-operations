#include <stdio.h>

void displayMenu() {
    printf("\n--- Banking System Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double balance = 1000.0;
    double amount;

    while(1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("You have successfully deposited $%.2f\n", amount);
                    printf("Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive number.\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("You have successfully withdrawn $%.2f\n", amount);
                    printf("Your new balance is: $%.2f\n", balance);
                } else if (amount > balance) {
                    printf("Insufficient funds. Your current balance is $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive number.\n");
                }
                break;
            case 4:
                printf("Thank you for using the banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice.please try again\n");
        }
    }

    return 0;
}


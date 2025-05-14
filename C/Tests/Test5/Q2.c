#include <stdio.h>

void transaction(float *balance) {
    int choice;
    float amount;

    while (1) {
        printf("\nCurrent Balance: %.2f\n", *balance);
        printf("Choose an option:\n");
        printf("1. Deposit\n2. Withdraw\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                *balance += amount;
                printf("Deposit successful! New Balance: %.2f\n", *balance);
            } else {
                printf("Invalid deposit amount!\n");
            }
        } else if (choice == 2) {
            printf("Enter withdrawal: ");
            scanf("%f", &amount);
            if (amount > 0 && *balance - amount >= 3000) {
                *balance -= amount;
                printf("Withdrawal successful! New Balance: %.2f\n", *balance);
            } else {
                printf("Insufficient balance! Minimum balance should be 3000.\n");
            }
        } else {
            printf("Invalid choice! Exiting program.\n");
            break;
        }
    }
}

int main() {
    float balance;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    if (balance < 3000) {
        printf("Minimum balance should be at least 3000 to open an account.\n");
    } else {
        transaction(&balance);
    }

    return 0;
}

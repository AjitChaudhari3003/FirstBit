#include<stdio.h>
#include<string.h>

int main() {
    int age[5], discount = 0;
    int amount = 500, totalAmount = 0;

    printf("Enter age: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &age[i]);
        if (age[i] > 59) {
            discount = amount * 0.5;
            totalAmount += amount - discount;
            printf("Discounted amount: %d\n", amount - discount);
        } else if (age[i] >= 12 && age[i] <= 59) {
            totalAmount += amount;
            printf("No discount: %d\n", amount);
        } else {
            discount = amount * 0.3;
            totalAmount += amount - discount;
            printf("Discounted amount: %d\n", amount - discount);
        }
    }

    printf("Total ticket amount: %d\n", totalAmount);

    return 0;
}

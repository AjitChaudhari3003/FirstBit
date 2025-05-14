// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to 
// enter his choice, then based on that perform the desired operations. 


#include <stdio.h>

int checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return (num % 2 == 0) ? 1 : 0;
}

int getSalary() {
    int salary;
    printf("Enter your basic salary: ");
    scanf("%d", &salary);
    return salary;
}

int main() {
    int choice;
    
    printf("Menu:\n1. Even/Odd\n2. Basic Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (checkEvenOdd()) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
    } else if (choice == 2) {
        printf("Your basic salary is: %d\n", getSalary());
    } else {
        printf("Error: Invalid choice\n");
    }

    return 0;
}

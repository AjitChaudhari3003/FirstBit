// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to 
// enter his choice, then based on that perform the desired operations. 


#include <stdio.h>

int checkEvenOdd(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int getSalary(int salary) {
    return salary;
}

int main() {
    int choice, num, salary;
    
    printf("Menu:\n1. Even/Odd\n2. Basic Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (checkEvenOdd(num)) {
            printf("Even.\n");
        } else {
            printf("Odd.\n");
        }
    } else if (choice == 2) {
        printf("Enter your basic salary: ");
        scanf("%d", &salary);
        printf("Your basic salary is: %d\n", getSalary(salary));
    } else {
        printf("Error: Invalid choice\n");
    }

    return 0;
}

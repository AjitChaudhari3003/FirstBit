// Accept a 3 digit number from user and find the sum of the digits and also reverse the number 

#include <stdio.h>
#include <stdlib.h>

void validateNumber(int num) {
    if (num < 100 || num > 999) {
        printf("Invalid input. Enter only a 3-digit number.\n");
        exit(1);
    }
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    validateNumber(num);
    printf("Sum of digits: %d\n", sumOfDigits(num));
    printf("Reverse of the number: %d\n", reverseNumber(num));

    return 0;
}

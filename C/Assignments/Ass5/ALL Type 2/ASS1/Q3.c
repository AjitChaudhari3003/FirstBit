// Accept a 3 digit number from user and find the sum of the digits and also reverse the number 

#include <stdlib.h>
#include <stdio.h>


int num;

void getNumber() {
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input, Enter only 3 digits numbers.\n");
        exit(1);
    }
}

int sumOfDigits() {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int reverseNumber() {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int main() {
    getNumber();
    printf("Sum of digits: %d\n", sumOfDigits());
    printf("Reverse of the number: %d\n", reverseNumber());
    return 0;
}

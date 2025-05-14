// Add the (first and last) digit of a given number? 

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);

}

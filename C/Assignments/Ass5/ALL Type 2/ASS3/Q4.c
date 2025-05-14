// Check number is prime or not. 
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

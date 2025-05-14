// Check number is prime or not. 
#include<stdio.h>

int Prime() {
    int num, i = 2, isprime = 1;

    printf("Enter the number to check prime or not: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not prime");
    }

    for(int i=2;i<=num/2;i++){
        if (num % i == 0) {
            isprime = 0;
            break;
        }
    }

    // while (i <= num / 2) {
    //     if (num % i == 0) {
    //         isprime = 0;
    //         break;
    //     }
    //     i++;
    // }
    if (isprime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}

int main(){
    Prime();
}
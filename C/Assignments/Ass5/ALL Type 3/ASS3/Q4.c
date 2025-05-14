// Check number is prime or not. 
#include<stdio.h>

int Prime(int num) {
    int  isprime = 1;

    

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

    isprime?printf("Prime"):printf("Not prime");
    // if (isprime) {
    //     printf("Prime");
    // } else {
    //     printf("Not prime");
    // }

    
}

int main(){
    int num;

    printf("Enter the number to check prime or not: ");
    scanf("%d", &num);

    Prime(num);
}
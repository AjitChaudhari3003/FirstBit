// Check number is prime or not. 
#include<stdio.h>

int Prime(int num) {

    if (num <= 1) {
       return 0;
    }

    for(int i=2;i<=num/2;i++){
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
    // while (i <= num / 2) {
    //     if (num % i == 0) {
    //         isprime = 0;
    //         break;
    //     }
    //     i++;
    // }

    // isprime?printf("Prime"):printf("Not prime");
    
}

int main(){
    int num;

    printf("Enter the number to check prime or not: ");
    scanf("%d", &num);

    if (Prime(num)) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    // Prime(num);
}
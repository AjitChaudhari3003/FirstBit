// Check number is armstrong or not? 

#include<stdio.h>

int Armstrong() {
    int num, originalNum, sum = 0, digit, count = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    temp = num;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {

    Armstrong()?printf("Armstrong"):printf("Not Armstrong");
    // if (Armstrong())
    //     printf("Armstrong number.\n");
    // else
    //     printf("Not an Armstrong number.\n");

    return 0;
}

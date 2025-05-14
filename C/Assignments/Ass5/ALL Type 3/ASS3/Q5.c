// Check number is armstrong or not? 

#include<stdio.h>

int Armstrong( int num) {
    int  originalNum, sum = 0, digit, count = 0, temp;

    originalNum = num;
    temp = num;

    //for digit count
    while(temp >0){
        temp /=10;
        count++;
    }

   temp=num;
   
    while (temp > 0) {
        digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is Armstrong number.\n", num);
    else
        printf("%d is not Armstrong number.\n", num);
}

int main(){
    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    Armstrong(num);
}
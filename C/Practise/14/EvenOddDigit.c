#include <stdio.h>

int main() {
    int num=125468,temp,digit,sum=0 , sum1=0,sum2=0;
    int count=0;
    temp=num;

    while(temp>0){
        digit =temp %10;
        if(digit%2==0){
            sum1 +=digit;
        }else{
            sum2 +=digit;
        }
        sum = sum1 + sum2;
        count++;
        temp /=10;
    }
    printf("Sum of even digit is : %d", sum);
}
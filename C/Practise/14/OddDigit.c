#include <stdio.h>

int main() {
    int num=12571,temp,digit,sum=0;
    // int count=0;
    temp=num;

    while(temp>0){
        digit =temp %10;
        if(digit%2!=0){
            sum +=digit;
        }
        // count++;
        temp /=10;
    }
    printf("Sum of even digit is : %d", sum);
}
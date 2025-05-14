// Check if the given number is even or odd. 

#include<stdio.h>

int  EVENODD(){
    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    return num%2==0;
}

int main(){
   EVENODD()?printf("Even"):printf("Odd");
}
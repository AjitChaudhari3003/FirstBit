// Check if the given number is even or odd. 
#include<stdio.h>

void EVENODD(int* num){

    if (*num%2==0)
    printf("Even");
    else
    printf("Odd");
}

void main(){
    int num;

    printf("Enter a number :");
    scanf("%d", &num);
   EVENODD(&num);
}
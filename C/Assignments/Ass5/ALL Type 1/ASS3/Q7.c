// Find factorial of number. 

#include<stdio.h>

int Fact(){
    int num , fact=1;

    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1; i<=num;i++){
        fact*=i;
        
    }
    printf(" Factorial of %d is : %d",num,fact);
}

int main(){
    Fact();
}
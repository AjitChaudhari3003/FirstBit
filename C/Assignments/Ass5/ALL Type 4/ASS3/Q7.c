// Find factorial of number. 

#include<stdio.h>

int Fact(int num){
    int  fact=1;


    for(int i=1; i<=num;i++){
        fact*=i;
        
    }
    return fact;
    
}

int main(){
    int num;

    printf("Enter a number :");
    scanf("%d",&num);

    printf("Factorial of %d is : %d",num,Fact(num));

    
}
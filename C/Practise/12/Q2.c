#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number :");
    scanf("%d", &num);

    if(num%2==0 && num%3==0){
        printf("Number is divisble by both 2 and 3");
    }else if (num %3 ==0)
    {
       printf("Number is divisible by 3");
    }else if (num%2==0)
    {
        printf("Number is divisible by 2");
    }else{
        printf("Not divisble by 2 and 3");
    }
    
}
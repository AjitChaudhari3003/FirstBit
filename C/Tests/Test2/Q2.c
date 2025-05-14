#include<stdio.h>

int main(){
    int num;

    printf("Enter a number :");
    scanf("%d", &num);

    if(num==0){
        printf("Given number is neutral");
    }else if (num>0)
    {
       printf("Given number is postive");
    }else{
        printf("Given number is negative");
    }
    
}
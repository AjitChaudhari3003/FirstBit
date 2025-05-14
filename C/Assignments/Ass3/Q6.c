// Check number is perfect or not. 

#include<stdio.h>

int main(){
    int num , fact=0;


    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1;i<num;i++){
        if(num%i==0){
           fact +=i;
        }
    }

    if(num==fact)
     printf("%d is perfect number",num);
     else
     printf("%d is not perfect number",num);
}
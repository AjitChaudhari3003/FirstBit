// Check number is perfect or not. 

#include<stdio.h>

int Perfect(){
    int num , fact=0;


    printf("Enter a number :");
    scanf("%d",&num);

    for(int i=1;i<num;i++){
        if(num%i==0){
           fact +=i;
        }
    }

    return (num==fact);
}

int main(){
    Perfect()?printf("Perfect"):printf("Not");
}
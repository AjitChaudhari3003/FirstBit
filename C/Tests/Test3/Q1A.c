#include<stdio.h>

int main(){
    int start=10;
    int end=25;

    for(int i=start;i<=end;i++){
        if(i%2==0){
            printf("Even : %d\n",i);
        }
        else{
            printf("Odd : %d\n",i);
        }
    }
}
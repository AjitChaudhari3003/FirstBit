#include<stdio.h>

int main(){
    int start=1;
    int end=15;

    for(int i=start;i<=end;i++){
        if(i%2==0){
            printf("Even : %d\n",i);
        }
        else{
            printf("Odd : %d\n",i);
        }
    }
}
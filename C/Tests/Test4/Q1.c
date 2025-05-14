#include<stdio.h>

int main(){
    for(int num=10;num<=15;num++){
        printf("%d = ",num);
        for(int i=1;i<=num;i++){
            if(num%i==0){
                printf("%d ",i);
            }
           
        }
        printf("\n");
    }
}


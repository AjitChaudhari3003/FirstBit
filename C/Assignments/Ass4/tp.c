#include<stdio.h>

int main(){
    int range=200 , fact, num;

    // printf("Enter range for the perfect number: ");
    // scanf("%d", &range);

    for(num=1; num<=range;num++){
         fact=0;
        for(int i=1;i<num;i++ ){
            if(num%i==0){
            fact +=i;
        }}
        if(num==fact){
            printf(" %d ",num);
        }

    }


}
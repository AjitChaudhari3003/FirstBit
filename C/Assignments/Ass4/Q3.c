// check perfect number in the given range 1 to n? 

#include<stdio.h>

int main(){
    int range , fact=0, num;

    printf("Enter range for the perfect number: ");
    scanf("%d", &range);

    for( num = 1;num<=range;num++){
       fact=0;
        for(int i=1;i<=num/2;i++){
        if(num%i==0){
          fact +=i;
        }}
          if(fact == num)
          printf("%d ",num);
    }
}
// Print prime number in the given range 1 to n? 

#include<stdio.h>

int prime(int range){
    int  isprime;

    for(int num =2;num<=range;num++){
        isprime=1;
    for(int i=2;i<num;i++){
      if(num%i==0){
        isprime=0;
        break;
      }
    }
      if(isprime)
      printf(" %d ", num);

    }
}

int main(){
  int range;

    printf("Enter range for the prime number: ");
    scanf("%d", &range);

    prime(range);
}

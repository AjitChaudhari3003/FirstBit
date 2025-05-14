// check perfect number in the given range 1 to n? 

#include<stdio.h>

int perfect(int range){
    int  fact=0;

    for(int  num = 1;num<=range;num++){
       fact=0;
        for(int i=1;i<=num/2;i++){
        if(num%i==0){
          fact +=i;
        }}
          if(fact == num)
          printf("%d ",num);
    }
}

int main(){
  int range ;

  printf("Enter range for the perfect number: ");
  scanf("%d", &range);

    perfect(range);
}
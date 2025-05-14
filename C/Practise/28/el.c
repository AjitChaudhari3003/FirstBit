#include<stdio.h>

int main(){
  int prime,sum=0;
    for(int i=2;i<=10;i++){
        prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
              prime=0;
              break;
            }
        }
            if(prime==1){
                sum+=i;
            }
        }
    
    printf("%d",sum);
}
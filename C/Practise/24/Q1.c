#include<stdio.h>

int main(){
    // int start=11;
    int rem , digit;

    for(int num =111;num <=1000;num++){
            rem =0;
            int temp = num;
            while(temp>0){
               digit= temp%10;
               rem = rem*10 + digit;
               temp /=10;
            
            if(num == rem)
            printf("%d ", num);
        }
    }
}
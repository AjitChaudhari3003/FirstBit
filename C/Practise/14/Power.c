        
#include <stdio.h>

int main() {
    int num=5;
     int power=4;
     int result=1;

     for(int i=1;i<=power;i++){
        result *= num;
     }

     printf("The power of given %d number is :%d", num, result);



}
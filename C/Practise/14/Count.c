#include <stdio.h>

int main() {
    int num=1253 , temp;
     temp=num;

    int count=0;

    while(temp>0){
        temp /=10;
        count++;
    }
    printf("Count of digit is : %d", count);

}
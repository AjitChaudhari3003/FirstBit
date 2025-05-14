#include <stdio.h>

int main() {
    int num=5,sum=0;

    for(int i=1;i<=num;i++){
       sum +=i;
    }
    printf("Sum of natural number  is : %d", sum);
}
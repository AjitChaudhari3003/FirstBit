#include <stdio.h>

int main() {
    int num=5,sum=0, sq=1;

    for(int i=1;i<=num;i++){
        sq = i*i;
       sum +=sq;
    }
    printf("Sum of natural number  is : %d", sum);
}
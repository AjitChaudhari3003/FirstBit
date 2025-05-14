#include<stdio.h>

int fact(){
    int num=3;
    int fact=1;

    for(int i=1;i<=num;i++){
        fact *= i;
    }
    return fact;
    printf("Bye");
}

int main(){
    printf("start\n");
   printf("%d", fact());
}
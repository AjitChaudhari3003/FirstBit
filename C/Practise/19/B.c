#include<stdio.h>

int Myfun(){
    printf("c ");
    return 0;
}
void myfun(){
    printf("p");
}

void main(){
    printf("hello\n");
    Myfun();
    printf("Hi\n");
    myfun();
    printf("bye\n");
}
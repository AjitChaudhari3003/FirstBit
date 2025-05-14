#include<stdio.h>

int swap(){
    int a=5;
    int b=9;
    int c;

    c=a;
    a=b;
    b=c;

    printf("After swapping A = %d B = %d", a, b);

    // return a,b;

}

int main(){
    swap();
    // printf("After swping A = %d B = %d", swap());
}

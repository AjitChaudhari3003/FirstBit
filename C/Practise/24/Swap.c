#include<stdio.h>

int swap(int* x,  int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void main(){
    int a, b ;

    printf("Enter two numbers : ");
    scanf("%d%d", &a,&b);

    swap(&a, &b);
    printf("Value after swaping a=%u , b=%u",a,b);

}
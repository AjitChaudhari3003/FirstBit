// Write a program to find greatest of three numbers using nested if-else. 

#include<stdio.h>

void Comparison(int* a, int* b, int* c){

    if(*a>*b){
        if(*a>*c){
            printf("a is greater than b and  c ");
        }else{
            printf(" C is greater greater than  b ");
        }
    }else {if(*b>*c){
        printf("b is greater c and a ");
    }else{
        printf("c is  greater than a and c");
    }
}
}

void main(){
    int a , b , c ;

    printf("Enter a 3 numbers as a b c respectively: ");
    scanf("%d %d %d", &a , &b , &c);
  Comparison(&a,&b,&c);
}
// Write a program to find greatest of three numbers using nested if-else. 

#include<stdio.h>

int main(){
    int a=5 , b=60 , c=9;

    if(a>b){
        if(a>c){
            printf("a is greater than b and  c ");
        }else{
            printf(" C is greater greater than  b ");
        }
    }else if(b>c){
        printf("b is greater c and a ");
    }else{
        printf("c is  greater than a and c");
    }
}
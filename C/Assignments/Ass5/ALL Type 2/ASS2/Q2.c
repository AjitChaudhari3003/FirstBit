// Write a program to find greatest of three numbers using nested if-else. 

#include<stdio.h>

int Comparison(){
    int a = 5, b = 6, c = 9;

    (a>b)?(a>c)?a:c :(b>c)?b:c;

//     if(a > b){
//         if(a > c){
//             return a;
//         } else {
//             return c;
//         }
//     } else if(b > c){
//         return b;
//     } else {
//         return c;
//     }
}

void main(){
    int greatest = Comparison();
    printf("Greatest number is: %d\n", greatest);
}

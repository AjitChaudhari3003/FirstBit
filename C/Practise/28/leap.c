#include<stdio.h>

int main(){
    int year=2020;


    if((year%4==0 && year%100!=0)|| (year%400==0)){
        printf("Leap :%d",year);
    }else
    printf("Not");
}
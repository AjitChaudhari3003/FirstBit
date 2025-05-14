#include<stdio.h>

int main(){
    int Day;
    printf("Enter a Week day number between 1 to 7 :");
    scanf("%d", &Day);

    if(Day==1){
        printf("Weekday");
    }else if(Day==2){
        printf("Weekday");
    }else if(Day==3){
        printf("Weekday");
    }else if(Day==4){
        printf("Weekday");
    }else if(Day==5){
        printf("Weekday");
    }else if(Day==6){
        printf("Weekend");
    }else if(Day==7){
        printf("Weekend");
    }else{
        printf("Please enter a valid number");
    }
}
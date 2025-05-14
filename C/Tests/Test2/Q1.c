
#include<stdio.h>
int main(){
    int  units, total=0;
    printf("Write your electricity units: ");
    scanf("%d", &units);

    if(units <= 50 && units >= 1){
        total = units * 30;
    }else if(units <= 150 && units >= 51){
        total = units * 40;
    }else{
        total = units * 50;
    }

    printf("Total electricity bill is: %d", total);
}

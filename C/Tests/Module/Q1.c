#include<stdio.h>

int main(){
    int range, sum = 0, fact;
    printf("Enter range u want for sum :");
    scanf("%d", &range);

    for(int i=1;i<=range;i++){
        fact = 1;
        for(int j =1;j<=i;j++){
            fact*=j;
        }
        sum +=fact;
    }
    printf("Sum is :%d", sum);
}

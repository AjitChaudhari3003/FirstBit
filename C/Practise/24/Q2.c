#include<stdio.h>

int main(){

    int a,b;

    printf("Enter two number :");
    scanf("%d%d", &a, &b);

    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            //  if((i==1||j==1) || (i==a || j==b))
            if((i==1 || i==a) || (j==1 || j==b))
             printf("X ");
             else
             printf("O ");
        }
        printf("\n");
    }
}
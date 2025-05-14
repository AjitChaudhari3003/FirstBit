// Print fibonacci series?(optional)

#include<stdio.h>

int Fibbo(int n){
    int  num , prev=0,next=1,temp;

    for(num=0;num<=n;num++){
        printf("%d ", prev);
        temp = prev + next;
        prev = next;
        next = temp;
    }
}

int main(){
    int n;

    printf("Enter n for the fibo series: ");
    scanf("%d", &n);
    Fibbo(n);
}
// Print fibonacci series?(optional)

#include<stdio.h>

int main(){
    int n=10 , num , prev=0,next=1,temp;

    // printf("Enter n for the fibo series: ");
    // scanf("%d", &n);

    for(num=0;num<=n;num++){
        printf("%d ", prev);
        temp = prev + next;
        prev = next;
        next = temp;
    }
}
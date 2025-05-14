#include<stdio.h>

int main(){
    int a=1;
    while (a)
    {
       if(a>=10){
        a=0;
       }else{
        printf("%d",a);
       a++;

       }
    }
    a+=10;
    printf("%d",a);
}
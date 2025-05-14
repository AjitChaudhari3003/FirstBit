// mystrlen 

#include<stdio.h>

int mystrlen(char* str1){
    int i=0;
    while(str1[i]!='\0')
    i++;
    return i;
}

int main(){
    char str1[20]="Ajit";

    int res=mystrlen(str1);
    printf("%d",res);
    return 0;
    
}
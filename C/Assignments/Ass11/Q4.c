// WAP to Form a New String where the First Character and the Last Character have 
// been Exchanged 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);
    n=strlen(str)-1;

    if(n>1){
        char temp=str[0];
        str[0]=str[n];
        str[n]=temp;
    }
    printf("Updated string %s",str);
    return 0;
}

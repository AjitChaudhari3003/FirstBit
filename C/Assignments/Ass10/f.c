// mystrupper

#include<stdio.h>

char mystrupper(char* str1){
    printf("In upper case : ");
    for(int i=0;str1[i]!='\0';i++)
    if(str1[i]>='a'&& str1[i]<='z')
    printf("%c",str1[i]-32);
    else
    printf("%c",str1[i]);

}

void main(){
    char str1[]="ajitchaudhai";

    mystrupper(str1);

}
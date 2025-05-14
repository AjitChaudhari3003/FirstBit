// mystrncat 
#include<stdio.h>

char* mystrcat(char* str1 , char* str2,int n){
       
    int i=0;
    while(str1[i]!='\0')
    i++;
    // str1[i]='\0';
    // printf(" ");


    int j=0;
    while(str2[j]!='\0' && j<n){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    return str1;
}



void main(){
    char str1[20]="Ajit";
    char str2[20]="Chaudhari";

    mystrcat(str1,str2,4);

    printf("%s",str1);
}
// mystrncpy 

#include<stdio.h>

char* mystrncpy(char* str1 , char* str2,int n){
       
    int i;
    for(i=0;i<n && str1[i]!='\0';i++){
        str2[i]=str1[i];
     }

    str2[i]='\0';
    return str2;
}



void main(){
    char str1[20]="Ajit";
    char str2[20];

    mystrncpy(str1,str2,2);

    printf("Str1=%s",str1);
    printf("\nStr2=%s",str2);
}
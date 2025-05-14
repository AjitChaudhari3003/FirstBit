// mystrcmp 

#include<stdio.h>

int mystrcmp(char* str1,char* str2){
    int i;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
            if(str1[i]!=str2[i])
            return 1;
     }
    return 0;
}

void main(){
    char str1[20]="Ajit";
    char str2[20]="Ajit";
    
    if(mystrcmp(str1,str2)==0)
    printf("Both are equal");
    else
    printf("Not equal");
}
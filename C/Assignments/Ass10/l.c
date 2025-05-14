// mystrrchr 

#include<stdio.h>
int mystrlen(char* str1){
    int i=0;
    while(str1[i]!='\0')
    i++;
    return i;
}

char* mystrchr(char* str1, char str2){
    int len=mystrlen(str1);
     for(int i=len;i>0;i--){
         if(str1[i]==str2)
          return &str1[i];
     }
     return NULL;
}

int main(){
    char str1[]="Ajit Chaudhari, Aniket patil";
    char str2='A';

    char* res = mystrchr(str1,str2);
    if(res!=NULL)
    printf("Character '%c' found at index %d",str2,res-str1);
    else
    printf("Character '%c' not found ",str2);

    return 0;
}
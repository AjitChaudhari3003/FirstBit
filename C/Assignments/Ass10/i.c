// mystrstr
#include<stdio.h>
char* mystrstr(char* str1,char* str2){
    for(int i=0;str1[i]!='\0';i++){
        int j = 0;
        while (str1[i+j] == str2[j] && str2[j] != '\0') 
            j++;
    if (str2[j] == '\0')
    return &str1[i];
}
    return NULL;
}
int main(){
    char str1[]="Ajit Chaudhari, Aniket patil";
    char str2[]="Ajit";

    char* res = mystrstr(str1,str2);
    if(res!=NULL)
    printf("String '%s' found at index %ld",str2,res-str1);
    else
    printf("String '%s' not found ",str2);
}
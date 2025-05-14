// mystrnstr 
#include<stdio.h>
char* mystrstr(char* str1,char* str2,int n){
    for(int i=0;i<n || str1[i]!='\0';i++){
        int j = 0;
        while (str1[i+j] == str2[j] && str2[j] != '\0') 
            j++;
    if (str2[j] == '\0')
    return &str1[i];
}
    return NULL;
}
int main(){
    char str1[]="Chaudhari";
    char str2[]="Ajit";

    char* res = mystrstr(str1,str2,3);
    if(res!=NULL)
    printf("String '%s' found at index %ld",str2,res-str1);
    else
    printf("String '%s' not found ",str2);
}
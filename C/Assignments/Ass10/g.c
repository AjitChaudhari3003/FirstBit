// mystrlower

#include<stdio.h>

char mystrupper(char* str1){
    printf("In lower case : ");
    
    for(int i=0;str1[i]!='\0';i++)
    if(str1[i]>='A'&& str1[i]<='Z')
      printf("%c",str1[i]+32);
      else
      printf("%c",str1[i]);
}

void main(){
    char str1[]="AjitfbfbbfbfCHJBBSJFB";

    mystrupper(str1);

}
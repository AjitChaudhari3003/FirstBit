// Check if a string is a palindrome. 

#include<string.h>
#include<stdio.h>

int main(){
    char str[]="AbbA";
    char* str2=strrev(str);

    // printf("%s",str2);

    if(str==str2)
      printf("Equal");
      else
      printf("Not");

}

// mystrcasecmp 

#include<stdio.h>

int mystrcasecmp( char* str1,char* str2) {
    while (*str1 && *str2) {
        char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + 32 : *str1;
        char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + 32 : *str2;

        if (c1 != c2) 
            return c1 - c2;
        
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
int main(){
    char str1[]="Abc";
    char str2[]="abC";

    int result = mystrcasecmp(str1, str2);
    if (result == 0) 
        printf("Strings are equal\n");
     else 
        printf("Strings are not equal");
    
  return 0;
}
//  mystrncasecmp 

#include <stdio.h>

int mystrncasecmp(char* str1, char* str2, int n) {
    while (n > 0 && *str1 && *str2) {
        char c1 = (*str1 >= 'A' && *str1 <= 'Z') ? *str1 + 32 : *str1;
        char c2 = (*str2 >= 'A' && *str2 <= 'Z') ? *str2 + 32 : *str2;

        if (c1 != c2) 
            return c1 - c2;
        
        str1++;
        str2++;
        n--;
    }
    
    if (n == 0)
        return 0;
    
    if (*str1 || *str2) 
        return (*str1 ? 1 : -1);
    
    return 0;
}

int main() {
    char str1[] = "AbcDef";
    char str2[] = "abCxyz";

    int n = 5;  
    int result = mystrncasecmp(str1, str2, n);

    if (result == 0) 
        printf("First %d characters are equal\n", n);
    else 
        printf("First %d characters are not equal\n", n);

    return 0;
}

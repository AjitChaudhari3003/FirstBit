// Write a program to scan string from user then scan a single character 
// and search it in a accepted string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    char *pos = strchr(str, ch);

    if (pos) {
        printf("Character '%c' found at position %ld\n", ch, pos-str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
    
}

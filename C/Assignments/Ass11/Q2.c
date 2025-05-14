// WAP Replace all Occurrences of ‘a’ with $ in a String 

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], ch,replace;
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    printf("Enter a replacemet character: ");
    scanf(" %c", &replace);

    char *pos = strchr(str, ch);

    if (pos) {
        *pos=replace;
        printf("Updated string: %s\n", str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
// WAP to Remove the nth Index Character from a Non-Empty String 

#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int n, len;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the index to remove: ");
    scanf("%d", &n);

    len = strlen(str);

    if (n < 0 || n >= len) {
        printf("Invalid index!\n");
    } else {
        memmove(&str[n], &str[n + 1], len - n);  
        printf("Updated string: %s\n", str);
    }

    return 0;
}

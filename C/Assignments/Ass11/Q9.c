// WAP to Take in Two Strings and Display the Larger String without Using Built-in 
// Functions 

#include <stdio.h>

int string_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (string_length(str1) > string_length(str2)) {
        printf("Larger string: %s\n", str1);
    } else {
        printf("Larger string: %s\n", str2);
    }

    return 0;
}

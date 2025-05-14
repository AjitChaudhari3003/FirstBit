// WAP to Remove the Characters of Odd Index Values in a String 


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Updated string: %s\n", result);
    return 0;
}

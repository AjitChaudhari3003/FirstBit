// WAP to Calculate the Number of Words Present in a String 


#include <stdio.h>

int main() {
    char str[200];
    int count = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}

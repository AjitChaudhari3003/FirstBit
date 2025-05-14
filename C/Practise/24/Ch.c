#include <stdio.h>

int main() {
    char ch;
    printf("Enter the starting alphabet: ");
    scanf(" %c", &ch);  

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        for (char i = ch; i <= ((ch >= 'a') ? 'z' : 'Z'); i += 2) {
            printf("%c%c", i, ((i >= 'a' )? i - 31 : i + 33)); 
        }
    } else {
        printf("Enter a valid alphabet.");
    }

    return 0;
}

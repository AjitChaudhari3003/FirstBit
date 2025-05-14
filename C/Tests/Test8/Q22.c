#include <stdio.h>
#include <string.h>

void reverse(){
    char str[1000];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Original String: %s\n", str);

    printf("Reversed String: ");
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

}

int main() {
    reverse();
    return 0;
}

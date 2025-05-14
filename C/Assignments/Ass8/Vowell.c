#include <stdio.h>

int contain(char word[]) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; word[j] != '\0'; j++) {
        char ch = word[j];

        if (ch == 'a' || ch == 'A') a = 1;
        if (ch == 'e' || ch == 'E') e = 1;
        if (ch == 'i' || ch == 'I') i = 1;
        if (ch == 'o' || ch == 'O') o = 1;
        if (ch == 'u' || ch == 'U') u = 1;
    }

    return (a && e && i && o && u);  
}

int main() {
    char ch[5][10];  

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", ch[i]);  
    }

    printf("\nWords containing all vowels :");
    for (int i = 0; i < 5; i++) {
        if (contain(ch[i])) {
            printf("%s\n", ch[i]);  
        }
    }

    return 0;
}

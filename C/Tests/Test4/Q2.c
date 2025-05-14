#include <stdio.h>

int main() {
    int base = 2;  
    int power = 4;
    int result = 1;

    for (int i = 1; i <= power; i++) {
        result *= base;  
    }

    printf("%d", result);
}

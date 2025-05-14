#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers up to %d is: %d\n", num, sum);
}

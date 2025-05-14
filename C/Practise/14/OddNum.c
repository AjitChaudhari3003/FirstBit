#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers up to %d is: %d\n", num, sum);
}

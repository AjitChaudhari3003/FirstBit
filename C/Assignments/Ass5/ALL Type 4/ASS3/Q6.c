// Check number is perfect or not. 

#include <stdio.h>

int Perfect(int num) {
    int fact = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            fact += i;
        }
    }

    return (num == fact);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (Perfect(num))
        printf("%d is a perfect number\n", num);
    else
        printf("%d is not a perfect number\n", num);
    return 0;
}

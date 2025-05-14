// Accept two numbers from user and an operator (+,-,/,*,%) based on that 
// perform the desired operations. 

#include <stdio.h>

int Operation(int a, int b, char op) {
    int res = 0;

    if (op == '*') {
        res = a * b;
    } else if (op == '/') {
        if (b == 0) {
            printf("Error\n");
            return 1;
        }
        res = a / b;
    } else if (op == '+') {
        res = a + b;
    } else if (op == '-') {
        res = a - b;
    } else if (op == '%') {
        if (b == 0) {
            printf("Error\n");
            return 1;
        }
        res = a % b;
    } else {
        printf("Error\n");
        return 1;
    }

    printf("Result: %d\n", res);
    return 0;
}

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    Operation(a, b, op);
    return 0;
}

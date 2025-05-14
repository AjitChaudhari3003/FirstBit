// Accept two numbers from user and an operator (+,-,/,*,%) based on that 
// perform the desired operations. 

#include <stdio.h>

int Opration() {
    int a = 10;
    int b = 3;
    int res;
    char op = '*';

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
    }

    printf("Result is :%d\n", res);
}

int main(){
    Opration();
}
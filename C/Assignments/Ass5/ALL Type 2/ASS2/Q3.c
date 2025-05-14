// Accept two numbers from user and an operator (+,-,/,*,%) based on that 
// perform the desired operations. 

#include <stdio.h>

int Opration() {
    int a = 10;
    int b = 5;
    int res;
    char op = '+';

    if (op == '*') {
        res = a * b;
    } else if (op == '/') {
        res = a / b;
    } else if (op == '+') {
        res = a + b;
    } else if (op == '-') {
        res = a - b;
    } else if (op == '%') {
        res = a % b;
    } else {
        printf("Error\n");
    }
    return res;
}

int main(){
    printf("Result is : %d\n", Opration());
}
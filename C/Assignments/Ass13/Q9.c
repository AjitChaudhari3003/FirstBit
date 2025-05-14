#include<stdio.h>

struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex c1;

    printf("Enter complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    printf("Complex Number: %.2f + %.2fi", c1.real, c1.imaginary);

    return 0;
}

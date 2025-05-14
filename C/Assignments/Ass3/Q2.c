// Print table for the given number.

#include<stdio.h>

int main() {
    int a, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &a);


    while (i <= 10) {
        printf(" %d\n", a * i);
        i++;  
    }

}

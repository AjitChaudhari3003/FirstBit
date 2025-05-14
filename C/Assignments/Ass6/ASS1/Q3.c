// Accept a 3 digit number from user and find the sum of the digits and also reverse the number 

#include <stdio.h>

void Digit(int* num) {
    int  sum = 0, rev = 0, temp;

    if (*num >= 100 && *num <= 999) {
        temp = *num;
        while (temp > 0) {
            sum += temp % 10;
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        printf("Sum of digits: %d\n", sum);
        printf("Reverse of the number: %d\n", rev);
    } else {
        printf("Enter a valid 3-digit number.\n");
    }

}
int main(){
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    Digit(&num);
}
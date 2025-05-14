// Add the (first and last) digit of a given number? 

#include <stdio.h>

int Summ(int num) {
    int firstDigit, lastDigit;

    lastDigit = num % 10;
    firstDigit = num;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int res= firstDigit+ lastDigit;
    printf("Sum of first and last digits is : %d ", res);


}
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    Summ(num);

}
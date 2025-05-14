// Check the given number is palindrome or not?

#include <stdio.h>

int palindrome() {
    int num, originalNum, reversedNum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num>0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return(originalNum == reversedNum);
}

int main(){
    palindrome()?printf("Pallindrome"):printf("Not");
}

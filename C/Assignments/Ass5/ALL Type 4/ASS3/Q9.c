// Check the given number is palindrome or not?

#include <stdio.h>

int palindrome(int num) {
    int  originalNum, reversedNum = 0, digit;

    originalNum = num;

    while (num>0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum == originalNum;

    
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is Not a Palindrome.\n", num);


    
}

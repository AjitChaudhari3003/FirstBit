// Check number is strong or not. 

#include <stdio.h>

int Strong() {
    int num, originalNum, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum=num;

    while (num > 0) {
        digit = num % 10;  
        int fact = 1;  

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;  
        num /= 10;  
    }

    if (sum == originalNum)
        printf("%d is a Strong Number.\n", originalNum);
    else
        printf("%d is not a Strong Number.\n", originalNum);

}

int main(){
    Strong();
}

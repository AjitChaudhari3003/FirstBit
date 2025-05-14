// Check number is strong or not. 

#include <stdio.h>

int Strong(int num) {
    int originalNum, digit, sum = 0, temp;


      num=temp;

    while (temp > 0) {
        digit = temp % 10;  
        int fact = 1;  

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;  
        temp /= 10;  
    }

    return num == sum;

}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Strong(num))
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);

    
}

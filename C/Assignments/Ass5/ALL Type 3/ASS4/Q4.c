// check strong number in the given range 1 to n? 

#include<stdio.h>

int Strong(int range){
    int  fact, num, temp, digit, sum;

    for(num = 1; num <= range; num++){
        sum = 0;
        temp = num;

        while(temp > 0){
            digit = temp % 10;
            fact = 1;

            for(int i = 1; i <= digit; i++){
                fact *= i;
            }
            sum += fact;
            temp /= 10;
        }
        if(sum == num)
            printf("%d ", num);
    }

}

int main(){
    int range;

    printf("Enter range for the strong number: ");
    scanf("%d", &range);

    Strong(range);
}
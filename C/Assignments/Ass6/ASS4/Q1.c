// Print armstrong number in the the given range 1 to n? 

#include <stdio.h>

int Arm(int* range) {
    int start = 1, num, temp, count, result, digit;

    

    for (num = start; num <= *range; num++) {
        temp = num;
        count = 0;
        result = 0;

        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            int power = 1;

            for (int j = 1; j <= count; j++) 
                power *= digit;
            
            // int x =count;
            // while (x>0)
            // {
            //     power *= digit;
            //     x--;
            // }
            
            result += power;
            temp /= 10;
        }

        if (num == result) {
            printf("%d ", num);
        }
    }

}
int main(){
    int range;

    printf("Enter range for the armstrong number: ");
    scanf("%d", &range);

    Arm(&range);
}
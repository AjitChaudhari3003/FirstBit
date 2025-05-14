// Calculate sum of numbers in the given range. 

#include<stdio.h>

int Sum(int start , int end){
    int sum=0;

    if(start>end){
        return 1;
    }

    // while (start <= end)
    // {
    //     sum+=start;
    //     start++;
    // }

    for(int i=start;i<=end;i++){
        sum +=i;
    }
    printf("Total sum is : %d", sum);

}

int main(){
    int start , end ;

    printf("Enter the staring number :");
    scanf("%d" ,  &start);

    printf("Enter the ending number :");
    scanf("%d" ,  &end);

    Sum(start,end);
}
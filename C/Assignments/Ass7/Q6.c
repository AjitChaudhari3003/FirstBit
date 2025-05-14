// 6. Accept array and print only prime numbers of array.  

#include<stdio.h>

int main(){
    int arr[5];

    printf("Enter 5 numbers :");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Prime Numbers :");
    for(int i=0;i<5;i++){
        int num= arr[i];
        int j;

        for( j=2;j<num;j++)
         if(num%j==0)
            break;

         if (j == num) 
            printf("%d ", num);
    }

}
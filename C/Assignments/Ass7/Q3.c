// 3. Find sum of all numbers.  

#include<stdio.h>

int main(){
    int arr[5]= {92,87,5,79,11};
    int sum=0;

    for(int i=0;i<5;i++)
      sum +=arr[i];
    
    printf("Sum is %d", sum);

}
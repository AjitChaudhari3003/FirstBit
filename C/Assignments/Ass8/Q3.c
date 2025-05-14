// 3. Find sum of all numbers. 
#include<stdio.h>

int sum(int arr[]){
    int sum=0;
    for(int i=0;i<10;i++)
     sum += arr[i];
     return sum;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
   
    printf("Original array : ");
    for(int i=0;i<10;i++)
     printf("%d ",arr[i]);

     printf("\nTotal sum of above array is %d.",sum(arr));

     return 0;
}
// 3. Find sum of all numbers. 
#include<stdio.h>
#include<stdlib.h>

int sum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++)
     sum += arr[i];
     return sum;
}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int *arr = (int*)malloc(size * sizeof(int));

    printf("Enter %d elements in array : ",size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
   
    printf("Original array : ");
    for(int i=0;i<size;i++)
     printf("%d ",arr[i]);

     printf("\nTotal sum of above array is %d.",sum(arr,size));
    free(arr); 

     return 0;
}
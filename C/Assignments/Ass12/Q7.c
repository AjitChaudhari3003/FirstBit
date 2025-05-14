// 7. Take two array and add sum in third array 
// Example- 
// arr[5]= {1,2, 3, 4,5} 
// brr[5]={10,20,30, 40, 50} 
// crr[5]={11,22,33,44,55} 

#include<stdio.h>
#include<stdlib.h>

void sum(int *arr, int *brr,int size1,int size2){
   int result[5];
   printf("\nResultant array :");
   for(int i=0;i<size1;i++){
   result[i]=arr[i]+brr[i];
   printf("%d ",result[i]);
}
}
int main(){
    int size1,size2;

    printf("Enter the size of first array :");
    scanf("%d",&size1);

    int* arr = (int*)malloc (sizeof(int)*size1);

    printf("Enter %d elements in array :",size1);
    for(int i=0;i<size1;i++)
    scanf("%d",&arr[i]);

    printf("First array : ");
    for(int i=0;i<size1;i++)
     printf("%d ",arr[i]);

    printf("\nEnter the size of second array :");
    scanf("%d",&size2);

    int* brr = (int*)malloc (sizeof(int)*size2);

    printf("Enter %d elements in array :",size2);
    for(int i=0;i<size2;i++)
    scanf("%d",&brr[i]);

    printf("Second array : ");
    for(int i=0;i<size2;i++)
     printf("%d ",brr[i]);

    sum(arr,brr,size1,size2);
    free(arr);
    free(brr);
    return 0;
}
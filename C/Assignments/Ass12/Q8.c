// 8. Merge two arrays 

#include<stdio.h>
#include<stdlib.h>

void merge(int *arr1,int *arr2,int size1,int size2){
    int arr[size1+size2];
    int i,j;
    for( i=0;i<size1;i++)
        arr[i]=arr1[i];
    
    for( j=0;j<size2;j++)
     arr[i+j] = arr2[j];

     printf("\nArray after merging :");
     for(i=0;i<(size1+size2);i++)
     printf("%d ",arr[i]);
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
 
  merge(arr,brr,size1,size2);
  free(arr);
  free(brr);

 return 0;
}
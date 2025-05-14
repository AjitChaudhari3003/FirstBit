// 8. Merge two arrays 

#include<stdio.h>

void merge(int arr1[],int arr2[]){
    int arr[9];
    int i,j;
    for( i=0;i<5;i++)
        arr[i]=arr1[i];
    
    for( j=0;j<4;j++)
     arr[i+j] = arr2[j];

     printf("Array after merging :");
     for(i=0;i<9;i++)
     printf("%d ",arr[i]);
}

int main(){
  int arr1[]={1,2,3,4,5};
  int arr2[]={6,7,8,9};
 
  merge(arr1,arr2);

 return 0;
}
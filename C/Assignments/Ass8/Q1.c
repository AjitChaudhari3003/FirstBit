// 1. Find minimum and maximum number in array.  

#include<stdio.h>

void max(int arr[]){
    int max=arr[0];

    for(int i=0;i<6;i++)
     if(arr[i]>max)
        max= arr[i];
      printf("\nThe maximum element is %d.",max);
}

void min(int arr[]){
    int min=arr[0];

    for(int i=0;i<6;i++)
     if(arr[i]<min)
        min= arr[i];
      printf("\nThe minimum element is %d.",min);
}

int main(){
    int arr[]={2,5,9,7,6,8};

    printf("Original Array :");
    for(int i=0;i<6;i++)
     printf("%d ",arr[i]);

     max(arr);
     min(arr);

     return 0;
}
// 1. Find minimum and maximum number in array.  

#include<stdio.h>

int main(){
    int arr[5]= {92,87,5,79,11};
    int min=arr[0];
    int max=arr[0];

    for(int i=1;i<5;i++){
      if(arr[i]< min)
        min= arr[i];
    }
    printf("minimum is = %d.", min);

    for(int i=1;i<5;i++){
        if(arr[i]> max)
          max= arr[i];
      }
      printf("\nMaximum is = %d.", max);
}
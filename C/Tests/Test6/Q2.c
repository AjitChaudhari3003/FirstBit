#include<stdio.h>

int main(){
    int arr[]= {1,2,3,4,5};
    int max=arr[0];
    int max2=-1;
    int i;

    for( i=1;i<5;i++){
        if(arr[i]> max){
          max2=max;
          max= arr[i];
      }else if(arr[i]>max2){
         max2 = arr[i];
      }

    }
    printf("Two maximum are = %d,%d", max,max2);


}
// 5. Print alternate elements in array.  

#include<stdio.h>

void alternate(int arr[]){
    printf("\nAlternate elements of array : ");
    for(int i=1;i<10;i+=2)
     printf("%d ",arr[i]);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
   
    printf("Original array : ");
    for(int i=0;i<10;i++)
     printf("%d ",arr[i]);

     alternate(arr);

  return 0;

}
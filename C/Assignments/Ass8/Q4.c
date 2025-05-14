// 4. Find odd and even among the numbers.  

#include<stdio.h>

void even(int arr[]){
    printf("\nEven elements in array : ");
    for(int i=0;i<10;i++)
    if(arr[i]%2==0)
     printf("%d ",arr[i]);
}
void odd(int arr[]){
    printf("\nOdd elements in array : ");
    for(int i=0;i<10;i++)
    if(arr[i]%2!=0)
     printf("%d ",arr[i]);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
   
    printf("Original array : ");
    for(int i=0;i<10;i++)
     printf("%d ",arr[i]);

     even(arr);
     odd(arr);

  return 0;

}
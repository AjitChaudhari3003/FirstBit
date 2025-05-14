// 4. Find odd and even among the numbers.  

#include<stdio.h>
#include<stdlib.h>

void even(int *arr,int size){
    printf("\nEven elements in array : ");
    for(int i=0;i<size;i++)
    if(arr[i]%2==0)
     printf("%d ",arr[i]);
}
void odd(int *arr,int size){
    printf("\nOdd elements in array : ");
    for(int i=0;i<size;i++)
    if(arr[i]%2!=0)
     printf("%d ",arr[i]);
}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int* arr=(int*) malloc(sizeof(int)*size);

    printf("Enter %d elements in array :",size);
    for (int i = 0; i < size; i++)
    scanf("%d",&arr[i]);
   
    printf("Original array : ");
    for(int i=0;i<size;i++)
     printf("%d ",arr[i]);

     even(arr,size);
     odd(arr,size);
     free(arr);

  return 0;

}
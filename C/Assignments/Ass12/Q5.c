// 5. Print alternate elements in array.  

#include<stdio.h>
#include<stdlib.h>

void alternate(int *arr,int size){
    printf("\nAlternate elements of array : ");
    for(int i=0;i<size;i+=2)
     printf("%d ",arr[i]);
}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int* arr =(int*)malloc(sizeof(int)*size);

    printf("Enter %d elements in array :",size);
    for (int i = 0; i < size; i++)
    scanf("%d",&arr[i]);
   
    printf("Original array : ");
    for(int i=0;i<size;i++)
     printf("%d ",arr[i]);

     alternate(arr,size);
     free(arr);

  return 0;

}
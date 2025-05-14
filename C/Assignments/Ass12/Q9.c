// 9. Reverse the given array. 
#include<stdio.h>
#include<stdlib.h>

void reverse(int *arr,int size){
    printf("\nReversed array :");
    for(int i=size-1;i>=0;i--)
    printf("%d ",arr[i]);
}
int main(){
    int size;

    printf("Enter size of array :");
    scanf("%d",&size);

    int *arr = (int*)malloc(sizeof(int)*size);

    printf("Add %d elements in array :",size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    
    printf("Original Array :");
    for(int j=0;j<size;j++)
    printf("%d ", arr[j]);

    reverse(arr,size);
    free(arr);
    return 0;
}
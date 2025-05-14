// 10. Sort the array. 

#include <stdio.h>
#include<stdlib.h>
void sortArray(int *arr,int size) {
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
         if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
}

int main() {
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


    sortArray(arr,size);

    printf("\nSorted array is :");
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);

    return 0;
}

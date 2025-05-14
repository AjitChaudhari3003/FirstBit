// 2. Search the given number in array.  

#include<stdio.h>
#include<stdlib.h>

int Search(int *arr,int num,int size){
    for(int i=0;i<size;i++)
    if(arr[i]==num)
     return i; 

     return -1;
}

int main(){
    // int arr[]={2,5,9,7,6,8};
    int num;
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

     printf("\nEnter number you want to search in array :");
     scanf("%d",&num);

    int index= Search(arr,num,size) ;
    if(index !=-1)
    printf("\nThe given number %d is present at index %d: ",num,index);
    else
    printf("Not present in array");

    free(arr); 

    return 0;
}
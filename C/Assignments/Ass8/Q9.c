// 9. Reverse the given array. 
#include<stdio.h>

void reverse(int arr[]){
    printf("\nReversed array :");
    for(int i=5;i>0;i--)
    printf("%d ",arr[i]);
}
int main(){
    int arr[5];

    printf("Add elements in array :");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);
    
    printf("Original Array :");
    for(int j=0;j<5;j++)
    printf("%d ", arr[j]);

    reverse(arr);
    return 0;
}
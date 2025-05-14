// 9. Reverse the given array. 

#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    printf("Reversed array :");
    for(int i=size-1;i>=0;i--)
    printf("%d ",arr[i]);
}
#include<stdio.h>

void show(int* ptr , int size){
    for(int i=0;i<size;i++)
    scanf("%d",&ptr[i]);
}

int main(){
    int arr[5];
    // int arr[5]= {92,87,5,79,11};
    // arr[0]=9;

    printf("Enter 5 elements in array :");

    show(arr,5);
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);


}
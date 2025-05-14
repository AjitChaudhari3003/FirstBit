#include<stdio.h>

int swap(int arr[],int i,int j){
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
}


int main(){
    int arr[]={11,23,30,4,21,45,50};
    int i=2,j=4;

    printf("Before swapping :");
    for(int i=0;i<7;i++)
    printf("%d ",arr[i]);

    swap(arr,i,j);

    printf("\nAfter swapping :");
    for(int i=0;i<7;i++)
    printf("%d ",arr[i]);

}
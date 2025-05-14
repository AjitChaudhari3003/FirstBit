// 8. Merge two arrays 

#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={6,7,8,9,10};
    int crr[10];
    int i,j;

    for(i=0;i<5;i++)
    crr[i]=arr[i];

    for(j=0;j<5;j++)
    crr[i+j]=brr[j];

    printf("Merged array : ");
    for(i=0;i<10;i++)
    printf("%d ",crr[i]);
}
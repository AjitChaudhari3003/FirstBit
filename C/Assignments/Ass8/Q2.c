// 2. Search the given number in array.  

#include<stdio.h>

int Search(int arr[],int num){
    for(int i=0;i<6;i++)
    if(arr[i]==num)
     return i; 

     return -1;
}

int main(){
    int arr[]={2,5,9,7,6,8};
    int num;

    printf("Original Array :");
    for(int i=0;i<6;i++)
     printf("%d ",arr[i]);

     printf("\nEnter number you want to search in array :");
     scanf("%d",&num);

   int index= Search(arr,num) ;
    if(index !=-1)
    printf("\nThe given number %d is present at index %d: ",num,index);
    else
    printf("Not present in array");

    return 0;
}
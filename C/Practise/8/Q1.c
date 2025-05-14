// Merge two sorted arrays into a single sorted array. 
#include<stdio.h>
#include<stdlib.h>

void merge(int * arr1, int* arr2 , int size1, int size2){
    int merge[size1+size2];
    printf("Merged array :");
    int i,j;
    for( i=0;i<size1;i++)
     merge[i]=arr1[i];

     for(j=0;j<size2;j++)
     merge[i+j]=arr2[j];
      
     for(int i=0;i<size1+size2;i++)
     printf("%d ",merge[i]);
}

int main(){
    int size1,size2;
    printf("Enter the  size of first array :");
    scanf("%d",&size1);

    int* arr1= (int*) malloc(sizeof(int)*size1);

    printf("Enter %d elements in array :",size1);
    for(int i=0;i<size1;i++)
    scanf("%d",&arr1[i]);

    printf("Enter the  size of second array :");
    scanf("%d",&size2);

    int* arr2= (int*) malloc(sizeof(int)*size2);

    printf("Enter %d elements in second array :",size2);
    for(int i=0;i<size2;i++)
    scanf("%d",&arr2[i]);

    merge(arr1,arr2,size1,size2);
    return 0;

}

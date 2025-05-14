// 6. Accept array and print only prime numbers of array.  

#include<stdio.h>
#include<stdlib.h>

int isPrime(int num){
    if(num<2)
    return 0;

    for(int i=2;i<num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}

void printPrime(int *arr,int size){
    printf("\nPrime numbers in the array: ");
    for(int i=0;i<size;i++)
    if(isPrime(arr[i]))
     printf("%d ", arr[i]);
}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int* arr = (int*)malloc (sizeof(int)*size);

    printf("Enter %d elements in array :",size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

    printf("Original array : ");
    for(int i=0;i<size;i++)
     printf("%d ",arr[i]);

     printPrime(arr,size);
     free(arr);

     return 0;
}
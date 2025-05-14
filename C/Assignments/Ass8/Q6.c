// 6. Accept array and print only prime numbers of array.  

#include<stdio.h>

int isPrime(int num){
    if(num<2)
    return 0;

    for(int i=2;i<num;i++){
        if(num%i==0)
        return 0;
    }
    return 1;
}

void printPrime(int arr[]){
    printf("\nPrime numbers in the array: ");
    for(int i=0;i<5;i++)
    if(isPrime(arr[i]))
     printf("%d ", arr[i]);
}

int main(){
    int arr[5];

    printf("Enter elements in array :");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Original array : ");
    for(int i=0;i<5;i++)
     printf("%d ",arr[i]);

     printPrime(arr);

     return 0;
}
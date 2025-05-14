// 5. Print alternate elements in array. 


#include<stdio.h>

int main(){
    int arr[5]= {92,87,5,79,11};

    printf("Alternate number is :");
    for(int i=0;i<5;i+=2)
    printf(" %d ", arr[i]);

}
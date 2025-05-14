// Find duplicate elements in an array.

#include<stdio.h>

void duplicate(int* arr, int s){
    printf("Duplicates are :");
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if (arr[i]==arr[j]){
            printf(" %d", arr[i]);
            break;}
        }
    }
    printf("\n");
}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements in array :",size);
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    duplicate(arr,size);
    return 0;
}

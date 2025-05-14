// 10. Sort the array. 

#include <stdio.h>

void sortArray(int arr[]) {
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
         if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6};

    sortArray(arr);

    printf("Sorted array is :");
    for(int i=0;i<5;i++)
    printf("%d ",arr[i]);

    return 0;
}

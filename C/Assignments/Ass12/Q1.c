// 1. Find minimum and maximum number in array.  
#include <stdio.h>
#include <stdlib.h>

void find_max(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("\nThe maximum element is %d.", max);
}

void find_min(int *arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("\nThe minimum element is %d.", min);
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));
  

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    find_max(arr, size);
    find_min(arr, size);

    free(arr); 
    return 0;
}

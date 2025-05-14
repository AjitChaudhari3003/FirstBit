// 10. Sort the array. \
//selection sort

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(int);
    int i, j, min, temp;

    for (i = 0; i < size - 1; i++) {
        min = i;
        for (j = i+1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int shift(int arr[], int size, int index) {
    if (index < 0 || index >= size)
        return size;

    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];

    return size - 1;
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int index;

    printf("Original Array: ");
    display(arr, size);

    printf("Enter index you want to delete: ");
    scanf("%d", &index);

    size = shift(arr, size, index);

    printf("Array after deletion: ");
    display(arr, size);

    return 0;
}

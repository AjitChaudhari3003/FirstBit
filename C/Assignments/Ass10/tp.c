#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* arr =(int*)malloc(sizeof(int) *size);

}

int* StoreArray(int *arr, int size) {
    printf("Enter %d elements in array: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

        return arr;
}

void Display(int *arr, int size) {
    printf("Array is : ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
}

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int* ptr = createArray(size);

    int *ptr1 = StoreArray(ptr, size);

    Display(ptr1, size);

    free(ptr);
    return 0;
}

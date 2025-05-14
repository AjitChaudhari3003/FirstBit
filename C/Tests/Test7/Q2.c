#include <stdio.h>

void checkPalindrome(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            printf("Not Palindrome\n");
            return;
        }
    }
    printf("Palindrome\n");
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    checkPalindrome(arr, size);
    return 0;
}

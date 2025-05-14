// Count the frequency of each element in an array. 

#include<stdio.h>

void freq(int* arr, int s){
    int freq;
   
    for(int i=0;i<s;i++){
        freq=1;
        for(int j=i+1;j<s;j++){
            if (arr[i]==arr[j]){
            freq++;
            break;
        }
        }
        printf("Frequency of %d is: %d\n", arr[i], freq);
    }

}

int main(){
    int size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements in array :",size);
    for (int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    freq(arr,size);
    return 0;
}

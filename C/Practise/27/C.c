#include<stdio.h>

int main(){
    int arr[5]= {92,87,5,79,11};
        int ele=79;

    for(int i=0;i<5;i++){
        if(arr[i]==ele){
        printf("Element found at index %d.",i);
        return 0;
        }
    }
        printf("Not found.");
}
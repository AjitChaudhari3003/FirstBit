// 7. Take two array and add sum in third array 
// Example- 
// arr[5]= {1,2, 3, 4,5} 
// brr[5]={10,20,30, 40, 50} 
// crr[5]={11,22,33,44,55} 

#include<stdio.h>
void sum(int arr[], int brr[]){
   int result[5];
   printf("Resultant array :");
   for(int i=0;i<5;i++){
   result[i]=arr[i]+brr[i];
   printf("%d ",result[i]);
}
}
int main(){
    int arr[5]= {1,2,3,4,5};
    int brr[5]={10,20,30,40,50};

    sum(arr,brr);
    return 0;
}
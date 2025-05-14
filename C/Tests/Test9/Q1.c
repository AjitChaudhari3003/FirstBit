#include<stdio.h>
#include<string.h>


int main(){
    char arr[20];
    printf("Enter a string :");
    scanf("%s",arr);

    int i,j,k;
    for( i=0;arr[i]!='\0';i++){
        for( j=i+1;arr[j]!='\0';){
            if(arr[i]==arr[j]){
                for( k=j;arr[k]!='\0';k++)
                 arr[k]=arr[k+1];
            }else{
            j++;
        }
      }
    }
    printf("after removing duplicate character: %s ",arr);
}
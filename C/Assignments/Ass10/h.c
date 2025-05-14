// mystrrev 
#include<stdio.h>
#include<string.h>
// int mystrlen(char* str1){
//     int i=0;
//     while(str1[i]!='\0')
//     i++;
//     return i;
// }

// char* mystrrev(char* str1){
//      int len=mystrlen(str1);
//      int start=0,end=len-1;

//      while(start<end){
//         int temp=str1[start];
//         str1[start]=str1[end];
//         str1[end]=temp;
//         start++;
//         end--;
//      }
//     return str1;
// }

int main(){
    char str1[20]="Gayatri";
    strrev(str1);

    printf("%s",str1);
    // int len= strlen(str1);

    // for(int i=len-1;i>=0;i--){
    //     printf("%c",str1[i]);
    // }

    // mystrrev(str1);
    // printf("%s",str1);

    return 0;
    
}

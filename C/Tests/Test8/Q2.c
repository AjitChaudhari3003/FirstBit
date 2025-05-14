#include<stdio.h>
#include<string.h>



int main(){
    char str[10];
    printf("Enter string :");
    for(int i=0;i<5;i++)
    scanf("%c",&str[i]);

    int len=strlen(str);
    printf("Original String :");
    for(int i=0;i<len;i++){
      printf("%c",str[i]);
    }
 printf("\n");

    printf("Reversed String :");
    for(int i=len-1;i>=0;i++){
      printf("%c",str[i]);
    }
 printf("\n");
   return 0;
}

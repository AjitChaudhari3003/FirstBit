// Print table for the given number.

#include<stdio.h>

int Table(int* a) {
    // int i=1;

    for(int i=1;i<=10;i++){
        int res = *a*i;
        printf("%d\n",res);
    }


    // while (i <= 10) {
    //     printf(" %d\n", a * i);
    //     i++;  
    // }

}
int main(){
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    Table(&a);
}
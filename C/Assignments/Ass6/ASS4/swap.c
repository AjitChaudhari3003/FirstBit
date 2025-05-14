#include<stdio.h>
// int swap(int a , int b){
//     int c;
//      c=a;
//      a=b;
//      b=c;

//     //  printf("After wapping of a and b a=%d and b=%d\n", a, b);

// }

// int main(){
//     int a, b;

//     printf("Enter two number a and b :");
//     scanf("%d%d",&a,&b);

//     printf("Before Swappimg %d %d\n", a, b);

//     swap(a, b);

//     printf("After swapping %d %d",a,b);
// }

// int main(){
//     for(int i='A';i<='Z';i+=2){
//         printf("%c",i);
//         printf("%c",i+33);

//     }


int main(){
    int a=10;
    int* p;
    *p=40;

    printf("%d",a);
    printf("%d",*p);

}
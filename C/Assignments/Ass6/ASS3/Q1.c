// Print numbes from 1 to 10. 
#include<stdio.h>

int Num(int* range){
// int a=1;
// while (a<=10)
// {
//    printf("%d\n", a);
//    a++;
// }

for(int i=1;i<=*range;i++){
   printf("%d ", i);
}

}

int main(){
    int range;

    printf("Enter a range u want to print from 1 to onmword :");
    scanf("%d",&range);
    Num(&range);
}
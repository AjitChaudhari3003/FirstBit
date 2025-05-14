#include <stdio.h>

int Add(int a , int b){
  int sum = a+b;
  return sum;
}

int Sub(int a, int b){
  int subb = a-b;
  return subb;
}

int main(){
    int a=5;
    int b=10;
    int Choice;

    printf("Enter your Choice :");
    scanf("%d", &Choice);

     if (Choice == 1)
     {
        printf("%d", Add(a, b));
     }else if( Choice == 2)
     printf("%d", Sub(a,b));
     else
     printf("Invalid Choice");

}
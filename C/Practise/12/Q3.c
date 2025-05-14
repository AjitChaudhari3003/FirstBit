#include<stdio.h>

int main(){
  int side1 , side2 , side3;
  printf("Enter 3 sides of triangle :");
  scanf("%d %d %d", &side1 , &side2 , &side3);

  if(side1== side2 && side2== side3){
    printf("Equilateral Triangle");
  }else if ((side1 == side2 )||(side2 == side3)||(side1 == side3) )
  {
    printf("Isosceles triangle");
  }else 
  {
    printf("Scalene triangle");
  }
}
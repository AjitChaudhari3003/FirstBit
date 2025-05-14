// Finding area and perimeter of rectangle or circle. 

#include<stdio.h>
void Circle(){
  
    int radius , perimeter,area;

    printf("Enter a radius :");
    scanf("%d", &radius);

    area = 3.14*radius*radius;
    printf("area of circle is  : %d \n",area);

    perimeter = 3.14*2*radius;
    printf("perimeter of circle is : %d",perimeter);

}

int main(){
    Circle();
}
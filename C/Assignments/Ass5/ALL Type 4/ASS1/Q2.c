// Finding area and perimeter of rectangle or circle. 

#include<stdio.h>


float Area(int radius) {
    return 3.14 * radius * radius;
}

float Perimeter(int radius) {
    return 2 * 3.14 * radius;
}

int main(){
    int radius ;

    printf("Enter a radius :");
    scanf("%d", &radius);

    printf("Area of a circle is : %f\n",Area(radius));
    printf("Perimeter of a circle is : %f",Perimeter(radius));

}
// Finding area and perimeter of rectangle or circle. 

#include <stdio.h>

float radius; 

void rad() {
    printf("Enter the radius: ");
    scanf("%f", &radius);
}

float Area() {
    return 3.14 * radius * radius;
}

float Perimeter() {
    return 2 * 3.14 * radius;
}

int main() {
    rad(); 
    printf("Area of circle: %.2f\n", Area());
    printf("Perimeter of circle: %.2f\n", Perimeter());
    return 0;
}
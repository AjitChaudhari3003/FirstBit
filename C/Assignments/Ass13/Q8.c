#include<stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1;

    printf("Enter distance (feet inch): ");
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Distance: %d feet %d inches", d1.feet, d1.inch);

    return 0;
}

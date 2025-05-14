#include<stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time t1;

    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);

    printf("Time: %02d:%02d:%02d", t1.hour, t1.min, t1.sec);

    return 0;
}

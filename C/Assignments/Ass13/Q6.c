#include<stdio.h>

struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date d1;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);

    printf("Date: %02d/%02d/%d", d1.date, d1.month, d1.year);

    return 0;
}

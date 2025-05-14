// 1. Find the price of item when discount is given (specify different discount based on  price) 

#include <stdio.h>

void Discount(int* price) {
    float dis = 0;
    float finalprice;

    if (*price < 500) {
        dis = *price * 0.1;
    } else if (*price < 1000) {
        dis = *price * 0.2;
    } else if (*price < 2000) {
        dis = *price * 0.3;
    } else {
        dis = *price * 0.4;
    }

    finalprice = *price - dis;

    printf("\nOriginal Price: %d\n", price);
    printf("Discount Applied: %.2f\n", dis);
    printf("Final Price: %.2f\n", finalprice);
}

int main() {
    int price;
    printf("Enter the price of the item: ");
    scanf("%d", &price);
    Discount(&price);
    return 0;
}

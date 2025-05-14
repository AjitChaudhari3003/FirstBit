#include <stdio.h>

int main() {
    int price;
    float discount = 0, final_price;

    printf("Enter the price of the book : ");
    scanf("%d", &price);

    if (price >= 500) {
        discount = price * 0.3;
    } else if (price >= 300) {
        discount = price * 0.2;
    } else if (price >= 100) {
        discount = price * 0.1;
    } else {
        printf("No Discount");
    }

    final_price = price - discount;
    printf("Price after discount: %f", final_price);

}

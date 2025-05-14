// 1. Find the price of item when discount is given (specify different discount based on 
// price) 

#include <stdio.h>

float Discount() {
    float price, dis, finalprice;
    
    printf("Enter the price of the item: ");
    scanf("%f", &price);

    if (price < 500) {
        dis = price * 0.1;
    } else if (price < 1000) {
        dis = price * 0.2;
    } else if (price < 2000) {
        dis = price * 0.3;
    } else {
        dis = price * 0.4;
    }

    finalprice = price - dis;
    return finalprice;
}

int main() {
    printf("Final Price: %.2f\n", Discount());
    return 0;
}

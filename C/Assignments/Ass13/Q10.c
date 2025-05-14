#include<stdio.h>
#include<string.h>

struct Product {
    int id;
    char name[20];
    int quantity;
    float price;
};

int main() {
    struct Product p1;

    printf("Enter product ID: ");
    scanf("%d", &p1.id);

    printf("Enter product name: ");
    scanf("%s", p1.name);

    printf("Enter quantity: ");
    scanf("%d", &p1.quantity);

    printf("Enter price: ");
    scanf("%f", &p1.price);

    printf("ID = %d \nName = %s \nQuantity = %d \nPrice = %.2f", p1.id, p1.name, p1.quantity, p1.price);

    return 0;
}

// Point of Sale System: Build a simple point of sale system using structures to 
// represent products with attributes like name, price, and quantity. Allow users 
// to add items to a cart and calculate the total cost. 

#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5
#define MAX_CART 10

typedef struct Product {
    char name[20];
    float price;
    int quantity;
} Product;

typedef struct CartItem {
    char name[20];
    float price;
    int quantity;
} CartItem;

void displayProducts(Product products[], int size) {
    printf("\nAvailable Products:\n");
    printf("%-5s %-15s %-8s %-10s\n", "ID", "Name", "Price", "Quantity");
    for (int i = 0; i < size; i++) {
        printf("%-5d %-15s $%-7.2f %-10d\n", i + 1, products[i].name, products[i].price, products[i].quantity);
    }
}

void addToCart(Product products[], CartItem cart[], int *cartSize, int size) {
    int productId, quantity;

    printf("\nEnter product ID to add to cart (0 to finish): ");
    scanf("%d", &productId);

    while (productId != 0) {
        if (productId < 1 || productId > size) {
            printf("Invalid product ID. Try again: ");
        } else {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (quantity <= 0 || quantity > products[productId - 1].quantity) {
                printf("Invalid quantity. Only %d available.\n", products[productId - 1].quantity);
            } else {
                strcpy(cart[*cartSize].name, products[productId - 1].name);
                cart[*cartSize].price = products[productId - 1].price;
                cart[*cartSize].quantity = quantity;
                (*cartSize)++;

                products[productId - 1].quantity -= quantity;

                printf("%s added to cart.\n", products[productId - 1].name);
            }
        }
        printf("\nEnter product ID to add to cart (0 to finish): ");
        scanf("%d", &productId);
    }
}

void displayCart(CartItem cart[], int cartSize) {
    if (cartSize == 0) {
        printf("\nYour cart is empty!\n");
        return;
    }

    float total = 0;
    printf("\nYour Cart:\n");
    printf("%-15s %-8s %-10s\n", "Product", "Price", "Quantity");

    for (int i = 0; i < cartSize; i++) {
        printf("%-15s $%-7.2f %-10d\n", cart[i].name, cart[i].price, cart[i].quantity);
        total += cart[i].price * cart[i].quantity;
    }

    printf("\nTotal Amount: $%.2f\n", total);
}

int main() {
    Product products[MAX_PRODUCTS] = {
        {"Apples", 1.50, 20},
        {"Bananas", 0.99, 30},
        {"Milk", 2.50, 15},
        {"Bread", 1.99, 10},
        {"Eggs", 3.00, 12}
    };

    CartItem cart[MAX_CART];
    int cartSize = 0;

    printf("=== Welcome to the Point of Sale System ===\n");
    displayProducts(products, MAX_PRODUCTS);

    addToCart(products, cart, &cartSize, MAX_PRODUCTS);

    displayCart(cart, cartSize);

    printf("\nThank you for shopping with us!\n");

    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct Mobile {
    int mid;
    char mname[50];
    int price;
    char brand[50];
} Mobile;

Mobile M1;

void store() {
    printf("Enter mobile id: ");
    scanf("%d",&M1.mid);
    printf("Enter mobile name: ");
    scanf("%s",M1.mname);
    printf("Enter mobile price: ");
    scanf("%d",&M1.price);
    printf("Enter mobile brand: ");
    scanf("%s",M1.brand);
}

void display() {
    printf("\n....Mobile Details....");
    printf("\nmobile id: %d ", M1.mid);
    printf("\nmobile name: %s ", M1.mname);
    printf("\nmobile price: %d ", M1.price);
    printf("\nmobile brand: %s ", M1.brand);
}

int main() {
    int choice;
    do {
        printf("\n1. Store mobile details ");
        printf("\n2. display mobile details ");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                store();
                break;
            case 2:
                display();
                break;
            default:
                printf("Invalid choice...");
        }
    } while (choice!=3);

}

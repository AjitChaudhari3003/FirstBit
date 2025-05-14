// Accept the price from user. Ask the user if he is a student (user may say yes or 
// no). If he is a student and he has purchased more than 500 than discount is 20% 
// otherwise discount is 10%. But if he is not a student then if he has purchased 
// more than 600 discount is 15% otherwise there is not discount.

#include <stdio.h>

int offer(int* price ,char* Student) {
    int  discount;

    if (*Student == 'y' || *Student == 'Y') {
        if (*price > 500) {
            discount = *price * 0.2;
        } else {
            discount = *price * 0.1;
        }
    } else if (*Student == 'n' || *Student == 'N') {
        if (*price > 600) {
            discount = *price * 0.15;
        }
    } else {
        printf("Invalid");
    }

    int finalPrice = *price - discount;
    printf("Final price : %d\n", finalPrice);

}

int main(){
    int price;
    char Student;

    printf("Enter the price: ");
    scanf("%d", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &Student);
  offer(&price , &Student);
}
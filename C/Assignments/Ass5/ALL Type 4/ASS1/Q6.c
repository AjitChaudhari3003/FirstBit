// Write a program to check if person is eligible to marry or not (male age >=21 
//     and female age>=18). 


#include <stdio.h>

int isEligibleToMarry(int fage, int mage) {
    if (mage >= 21 && fage >= 18)
        return 1; 
    else
        return 0; 
}

int main() {
    int fage, mage;

    printf("Enter female age: ");
    scanf("%d", &fage);

    printf("Enter male age: ");
    scanf("%d", &mage);

    if (isEligibleToMarry(fage, mage))
        printf("Both are eligible to marry.\n");
    else
        printf("One or both are not eligible to marry.\n");

    return 0;
}

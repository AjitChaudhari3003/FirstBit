// Write a program to check if person is eligible to marry or not (male age >=21 
//     and female age>=18). 


#include<stdio.h>

int Marry(){
    int fage, mage;

    printf("Enter female age :");
    scanf("%d", &fage);

    printf("Enter male age :");
    scanf("%d", &mage);

    if(mage >=21 && fage >=18)
    // printf("Both eligible");
    return 1;
    else if(mage <=21 && fage<=18)
    // printf("Both r not eligible");
    return 0;
    else if (mage<=21 || fage>=18)
    //  printf("male not eligible , female eligble");
    return 0;
     else if(mage >=21 || fage<=18)
    //  printf("female not eligible , male eligble");
    return 0;
}

void main(){
    Marry()?printf("Eligible"):printf("Not Eligible");
}
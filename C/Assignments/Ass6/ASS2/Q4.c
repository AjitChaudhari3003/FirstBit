// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to 
// enter his choice, then based on that perform the desired operations. 


#include<stdio.h>

int Salary(int* choice){

    if(*choice == 1){
    printf("Even /  Odd");
    }else if (*choice == 2){
        printf("Basic Salary ");
    }else{
        printf("Error");
    }
}

int main(){
    int choice;
    
    printf("Menu:\n1.Even/Odd\n2.Basic Salary\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
  Salary(&choice);
}
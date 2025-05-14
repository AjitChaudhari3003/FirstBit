#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char userid[20];
    char password[20];
} User;

int main() {
    User user = {"admin", "1234"}; 
    char inputUser[20], inputPass[20];
    int otp, enteredOtp;

    srand(time(0)); 

    
    printf("Enter User ID: ");
    scanf("%s", inputUser);
    printf("Enter Password: ");
    scanf("%s", inputPass);

    
    if (strcmp(user.userid, inputUser) == 0 && strcmp(user.password, inputPass) == 0) {
        otp = (rand() % 9000) + 1000; 
        printf("\nYour OTP is: %d\n", otp);
        
      
        printf("Enter the OTP: ");
        scanf("%d", &enteredOtp);
        
        if (enteredOtp == otp) {
            printf("\nLogin Successful!\n");
        } else {
            printf("\nIncorrect OTP. Login Failed.\n");
        }
    } else {
        printf("\nInvalid credentials. Login Failed.\n");
    }
    
    return 0;
}
// WAP to Take in a String and Replace Every Blank Space with special symbol. 
#include<stdio.h>
#include<string.h>

int main(){
    char str[100],symbol;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter symbol u want add: ");
    scanf(" %c", &symbol);

    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            str[i]=symbol;
        }
    }
    printf("Sentense after adding symbol %s",str);

}
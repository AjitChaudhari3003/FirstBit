// WAP to Count the Number of Vowels in a String 
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count=0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++){
        char ch = tolower(str[i]);
        if(strchr("aeiou",ch))
        count++;
    }
    printf("Number of Vowels in a String : %d",count);
}
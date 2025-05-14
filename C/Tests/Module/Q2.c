#include<stdio.h>
#include<string.h>

int main() {
    char ch[20];
    int count=0;

    printf("Enter word u want: ");
    scanf("%s",ch);

    for(int i=0;ch[i]!='\0';i++) {
        count=1; 
        for(int j =i+1; ch[j]!='\0';j++) {
            if(ch[i] == ch[j]) {
                count++;
                ch[j] = '0';  
            }
        }
        if(ch[i]!='0') {
            printf("%c=%d ", ch[i], count);
        }
    }
}

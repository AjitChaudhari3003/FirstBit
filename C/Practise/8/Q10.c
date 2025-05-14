//  Count the frequency of each character in a string. 

#include<stdio.h>
#include<string.h>

int main(){
    char str[]="AAAjit";

    for(int i=0;str[i]!=0;i++){
        int freq=1;
        int alreadyCounted = 0;

        for (int k = 0; k < i; k++) {
            if (str[i] == str[k]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted) continue;

        for(int j=i+1;str[j]!=0;j++){
            if(str[i]==str[j]){
                freq++;
            }
        }
        printf("freq for '%c' is : %d\n",str[i],freq);
    }
}
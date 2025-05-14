// Finding F from C (temp).

#include<stdio.h>
int Temp(){
    int celcius, farahnite;

    printf("Enter a temp :");
    scanf("%d", &celcius);

    farahnite = (celcius*9/5)+32;

    // printf("Given temp in farhanite is %f",farahnite);
    return farahnite;
}

int main(){
    printf("Given temp in farhanite is %d",Temp());
}
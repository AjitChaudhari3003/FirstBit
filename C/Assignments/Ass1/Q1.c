// Finding F from C (temp).

#include<stdio.h>
int main(){
    float celcius, farahnite;

    printf("Enter a temp :");
    scanf("%f", &celcius);

    farahnite = (celcius*9/5)+32;

    printf("Given temp in farhanite is %f",farahnite);



}
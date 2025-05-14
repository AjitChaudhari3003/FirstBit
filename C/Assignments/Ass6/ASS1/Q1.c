// Finding F from C (temp).

#include<stdio.h>

float temp(float* celcius){
    float  farahnite;
    farahnite = (*celcius*9/5)+32;
    printf("Given temp in farhanite is %f",farahnite);
}
int main(){
    float celcius;
    printf("Enter a temp :");
    scanf("%f", &celcius);
    temp(&celcius);
}
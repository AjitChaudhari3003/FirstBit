//  mystrcpy 

#include<stdio.h>

char* mystrcpy(char* str1 , char* str2){
       
    int i;
    // while(str1[i]!='\0'){
    // str2[i]=str1[i];
    // i++;
    // }
    for(i=0;str1[i]!='\0';i++){
    str2[i]=str1[i];
     }

    str2[i]='\0';
    return str2;
}



void main(){
    char str1[20]="Ajit";
    char str2[20];

    mystrcpy(str1,str2);

    printf("%s",str1);
    printf("\n%s",str2);

}
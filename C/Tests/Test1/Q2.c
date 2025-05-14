#include<stdio.h>


int main(){
    int year;
    printf("Enter year :");
    scanf("%d" , &year);

    if((year%4 ==0 && year%100 != 0) || year % 400 == 0){
            printf(" leaf year");
    }else{
            printf("Not leaf year");
        }
    
}

// output
// PS C:\Users\AJIT\Desktop\Test> cd "c:\Users\AJIT\Desktop\Test\" ; if ($?) { gcc Q2.c -o Q2 } ; if ($?) { .\Q2 }    
// Enter year :2020
// Given year is leaf year
// PS C:\Users\AJIT\Desktop\Test> cd "c:\Users\AJIT\Desktop\Test\" ; if ($?) { gcc Q2.c -o Q2 }
//  ; if ($?) { .\Q2 }
// Enter year :2011
// Not leaf year
// PS C:\Users\AJIT\Desktop\Test> 
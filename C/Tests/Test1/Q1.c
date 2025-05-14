#include<stdio.h>

int main(){
    int hour , min ,  sec;
    int totaltime;
    printf("Enter your time in hr:min:sec : ");
    scanf("%d %d %d" , &hour , &min , &sec);

    totaltime = (hour*3600) + (min *60) + sec;

    printf("total : %d", totaltime);
}

// output
// cd "c:\Users\AJIT\Desktop\Test\" ; if ($?) { gcc Q1.c -o Q1 } ; if ($?) { .\Q1 }
// Enter your time in hr:min:sec : 1 1 1
// total : 3661
// PS C:\Users\AJIT\Desktop\Test> 
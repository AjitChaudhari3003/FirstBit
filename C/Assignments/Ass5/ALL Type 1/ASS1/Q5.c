// Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
// 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 
// 30% respectively. 


#include<stdio.h>

void Salary(){
    int salary,DA,TA,HRA,total=0;

    printf("Enter a basics salary :");
    scanf("%d", &salary);

    if (salary <= 5000)
    {
        DA = salary*0.1;
        TA = salary*0.2;
        HRA = salary*0.25;

        total = salary+DA+TA+HRA;
        printf("Total Salary :%d",total);
    }else{
        DA = salary*0.15;
        TA = salary*0.25;
        HRA = salary*0.30;

        total = salary+DA+TA+HRA;
        printf("Total Salary :%d",total);
    }
    
}

void main(){
    Salary();
}
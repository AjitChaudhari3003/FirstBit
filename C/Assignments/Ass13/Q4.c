#include<stdio.h>
#include<string.h>

struct HR {
    int id;
    char name[20];
    float salary;
    float commission;
};

int main() {
    struct HR h1, h2;

    h1.id = 301;
    strcpy(h1.name, "Sara");
    h1.salary = 55000;
    h1.commission = 2000;

    printf("ID = %d \nName = %s \nSalary = %.2f \nCommission = %.2f", h1.id, h1.name, h1.salary, h1.commission);

    printf("\nEnter HR ID: ");
    scanf("%d", &h2.id);

    printf("Enter HR name: ");
    scanf("%s", h2.name);

    printf("Enter HR salary: ");
    scanf("%f", &h2.salary);

    printf("Enter HR commission: ");
    scanf("%f", &h2.commission);

    printf("ID = %d \nName = %s \nSalary = %.2f \nCommission = %.2f", h2.id, h2.name, h2.salary, h2.commission);
    return 0;
}

#include<stdio.h>
#include<string.h>

struct Admin {
    int id;
    char name[20];
    float salary;
    float allowance;
};

int main() {
    struct Admin a1, a2;

    a1.id = 201;
    strcpy(a1.name, "David");
    a1.salary = 60000;
    a1.allowance = 5000;

    printf("ID = %d \nName = %s \nSalary = %.2f \nAllowance = %.2f", a1.id, a1.name, a1.salary, a1.allowance);

    printf("\nEnter admin ID: ");
    scanf("%d", &a2.id);

    printf("Enter admin name: ");
    scanf("%s", a2.name);

    printf("Enter admin salary: ");
    scanf("%f", &a2.salary);

    printf("Enter admin allowance: ");
    scanf("%f", &a2.allowance);

    printf("ID = %d \nName = %s \nSalary = %.2f \nAllowance = %.2f", a2.id, a2.name, a2.salary, a2.allowance);
    return 0;
}

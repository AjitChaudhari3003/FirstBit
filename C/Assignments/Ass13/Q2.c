#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e1, e2;

    e1.id = 101;
    strcpy(e1.name, "John");
    e1.salary = 50000;

    printf("ID = %d \nName = %s \nSalary = %.2f", e1.id, e1.name, e1.salary);

    printf("\nEnter employee ID: ");
    scanf("%d", &e2.id);

    printf("Enter employee name: ");
    scanf("%s", e2.name);

    printf("Enter employee salary: ");
    scanf("%f", &e2.salary);

    printf("ID = %d \nName = %s \nSalary = %.2f", e2.id, e2.name, e2.salary);
    return 0;
}

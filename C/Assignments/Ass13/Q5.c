#include<stdio.h>
#include<string.h>

struct SalesManager {
    int id;
    char name[20];
    float salary;
    float incentive;
    int target;
};

int main() {
    struct SalesManager sm1, sm2;

    sm1.id = 401;
    strcpy(sm1.name, "Mike");
    sm1.salary = 62000;
    sm1.incentive = 3000;
    sm1.target = 50;

    printf("ID = %d \nName = %s \nSalary = %.2f \nIncentive = %.2f \nTarget = %d", sm1.id, sm1.name, sm1.salary, sm1.incentive, sm1.target);

    printf("\nEnter sales manager ID: ");
    scanf("%d", &sm2.id);

    printf("Enter sales manager name: ");
    scanf("%s", sm2.name);

    printf("Enter sales manager salary: ");
    scanf("%f", &sm2.salary);

    printf("Enter sales manager incentive: ");
    scanf("%f", &sm2.incentive);

    printf("Enter sales manager target: ");
    scanf("%d", &sm2.target);

    printf("ID = %d \nName = %s \nSalary = %.2f \nIncentive = %.2f \nTarget = %d", sm2.id, sm2.name, sm2.salary, sm2.incentive, sm2.target);
    return 0;
}

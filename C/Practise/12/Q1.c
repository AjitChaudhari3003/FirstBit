#include <stdio.h>

int main() {
    int pass_num, age, ticket_Cost, totalcost = 0;

    printf("Enter the number of passengers: ");
    scanf("%d", &pass_num);

    printf("Enter the cost of a ticket: ");
    scanf("%d", &ticket_Cost);

    for (int i = 1; i <= pass_num; i++) {
        printf("Enter the age of passenger %d: ", i);
        scanf("%d", &age);

        if (age < 12) {
            totalcost += ticket_Cost - (ticket_Cost * 0.3);
        } else if (age > 59) {
            totalcost += ticket_Cost - (ticket_Cost * 0.5);
        } else {
            totalcost += ticket_Cost;
        }
    }

    printf("Total cost: %d\n", totalcost);
}

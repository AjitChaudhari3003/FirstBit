#include <stdio.h>

int main() {
    int a, b;
    
    // Take input for grid size
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &a, &b);
    
    // Find the center position
    int centerRow = (a / 2) + 1;
    int centerCol = (b / 2) + 1;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            // Condition to print 'O' at the center
            if (i == centerRow && j == centerCol)
                printf("O ");
            else
                printf("X ");
        }
        printf("\n");
    }

    return 0;
}

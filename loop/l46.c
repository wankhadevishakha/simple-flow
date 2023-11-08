#include <stdio.h>

// Function to print the pattern
void printPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        int value = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", value);
            value += i;
        }
        printf("\n");
    }
}

int main() {
    int rows;
    
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);
    
    printPattern(rows);
    
    return 0;
}


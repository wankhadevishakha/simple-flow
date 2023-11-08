#include <stdio.h>
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

// Function to print Pascal's triangle
void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &numRows);
    
    printPascalsTriangle(numRows);
    
    return 0;
}


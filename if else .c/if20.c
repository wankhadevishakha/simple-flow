#include <stdio.h>

int main() {
    int quantity;
    float unit_cost = 100.0;
    
    printf("Enter the quantity of units: ");
    scanf("%d", &quantity);
    
    float total_cost = quantity * unit_cost;
    
    if (total_cost > 1000.0) {
        float discount = 0.1 * total_cost;
        float discounted_cost = total_cost - discount;
        printf("Total cost: %.2f\n", discounted_cost);
    } else {
        printf("Total cost: %.2f\n", total_cost);
    }
    
    return 0;
}


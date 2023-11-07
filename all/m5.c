#include <stdio.h>
int main() 
{
    int age, days;
    char gender;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    if (age >= 18 && age < 30) 
    {
        if (gender == 'M' || gender == 'm')
            printf("Wage: %d\n", 700 * days);
        else if (gender == 'F' || gender == 'f')
            printf("Wage: %d\n", 750 * days);
        else
            printf("Invalid gender. Please enter 'M' or 'F'.\n");
    }
     else if (age >= 30 && age <= 40) 
    {
        if (gender == 'M' || gender == 'm')
            printf("Wage: %d\n", 800 * days);
        else if (gender == 'F' || gender == 'f')
            printf("Wage: %d\n", 850 * days);
        else
            printf("Invalid gender. Please enter 'M' or 'F'.\n");
    } else 
    	{
        printf("Enter appropriate age.\n");
   	}

    return 0;
}


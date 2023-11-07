#include <stdio.h>

int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int isValidDate(int year, int month, int day) {
    // Check if year, month, and day are within valid ranges
    if (year <= 0 || month <= 0 || month > 12 || day <= 0)
        return 0;
    
    // Array to store the number of days in each month
    int daysInMonth[] = { 31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    // Check if the day is within the valid range for the given month
    if (day > daysInMonth[month - 1])
        return 0;
    
    return 1;
}

int main() {
    int year, month, day;
    
    // Prompt the user to enter the year, month, and day
    printf("Enter year: ");
    scanf("%d", &year);
    
    printf("Enter month: ");
    scanf("%d", &month);
    
    printf("Enter day: ");
    scanf("%d", &day);
    
    // Validate the date by calling the isValidDate() function
    if (isValidDate(year, month, day))
        printf("Valid date!\n");
    else
        printf("Invalid date!\n");
    
    return 0;
}


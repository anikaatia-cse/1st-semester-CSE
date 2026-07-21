# include<stdio.h>
/* Write a C program to input the number of days from user and 
   convert it into years, months, and days. */

int main()
{
    int days, years, months, remaining_days; 
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    remaining_days = days % 365;
    months = remaining_days / 30;
    remaining_days = remaining_days % 30;
    // Standard calendar assumption: 1 year = 365 days, 1 month = 30 days.

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remaining_days);
    return 0;
}   
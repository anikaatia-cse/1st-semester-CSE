# include<stdio.h>
/*  Write a C program to input two numbers and print their
    quotient and remainder */

int main()
{
    int a, b, quotient, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    quotient = a / b; // Calculate quotient
    remainder = a % b; // Calculate remainder
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0; 
}
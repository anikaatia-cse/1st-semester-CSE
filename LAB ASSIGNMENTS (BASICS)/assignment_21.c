# include<stdio.h>
/* Write a C program to find out the quotient and remainder of
   two numbers without using modulus (%) operator.  */

int main()
{
   int dividend, divisor, quotient, remainder;
   printf("Enter Dividend: ");
   scanf("%d", &dividend);
   printf("Enter Divisor: ");
   scanf("%d", &divisor);
   
   quotient = dividend / divisor;
   remainder = dividend - (divisor * quotient);

   printf("Quotient: %d\n", quotient);
   printf("Remainder: %d\n", remainder);
   return 0;
}   
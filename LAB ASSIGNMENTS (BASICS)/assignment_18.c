# include<stdio.h>
/* Write a C program to three digits number from user and
   calculate sum of first and last numbers. 
   Hint : I/p - 358, O/p - 11  */

int main()
{
   int num, first_digit, last_digit, sum;
   printf("Enter a three_digit number: ");
   scanf("%d", &num);
   
   first_digit = num / 100;  // Grabs the first digit using integer divison.
   last_digit = num %  10;   // Grabs the last digit using modulus operator.

   sum = first_digit + last_digit;
   printf("Sum of first and last digit: %d\n", sum);
   return 0;
}   
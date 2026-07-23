# include<stdio.h>
/* Write a C program to input three digits number from user and
   display square of first and last numbers.
   Hint : I/p-358, O/p-9 64  */

int main()
{
   int num, first_digit, last_digit, square;
   printf("Enter three digits number: ");
   scanf("%d", &num);

   first_digit = num / 100;  // Grabs the first digit using integer divison.
   last_digit = num % 10;    // Grabs the last digit using modulus operator.

   printf("Square of first_digit: %d\n", first_digit = first_digit * first_digit);
   printf("Square of last_digit: %d\n", last_digit = last_digit * last_digit);
   return 0;   
}   
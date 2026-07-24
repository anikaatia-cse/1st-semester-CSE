# include<stdio.h>
/* Write a C program to input two digits number from user and
   display with reverse number on screen
   Hint I/p-32, O/p-23  */
 
int main()
{
   int num, first_digit, last_digit, reverse;
   printf("Enter a two digits number: "); 
   scanf("%d", &num);
   
   first_digit = num / 10;  // Grabs the first digit using integer divison.
   last_digit = num % 10;   // Grabs the last digit using modulus operator.
   
   reverse = last_digit * 10 + first_digit;  // Forms the reversed number.
   printf("Reversed number: %d\n", reverse);
   return 0;
}   
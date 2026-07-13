# include<stdio.h>
/* Write a C program to interchange values of two numbers
   without using a third variable*/

int main()
{
      int a, b;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Before interchange: a = %d, b = %d\n", a, b);
      
      // Interchanging values without using a third variable
      a = a + b; // Step 1: Add both numbers and store in 'a'
      b = a - b; // Step 2: Subtract new 'b' from 'a' to get original 'a'
      a = a - b; // Step 3: Subtract new 'b' from new 'a' to get original 'b'
      
      printf("After interchange: a = %d, b = %d\n", a, b);
      
      return 0;
}      
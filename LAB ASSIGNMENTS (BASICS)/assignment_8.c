# include<stdio.h>
/* Write a C program to interchange values of two numbers
   using a third variable*/

int main()
{
      int a, b, temp;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
   
      printf("Before swapping: a = %d, b = %d\n", a, b);
   
      // Swapping using a third variable
      temp = a;
      a = b;
      b = temp;
   
      printf("After swapping: a = %d, b = %d\n", a, b);
      return 0;  
}
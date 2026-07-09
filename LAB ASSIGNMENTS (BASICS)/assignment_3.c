# include<stdio.h>
/* Write a C program that will print the sum 
   of two variables a and b; where a=10 and b=20.*/

int main()
{
    int a = 10;   // Here we declare the value of a as 10. Using int means the variable a is an integer type variable.
    int b = 20;   // Here we declare the value of b as 20. Using int means the variable b is an integer type variable.
    int sum = a + b;   // Here we declare the value of sum as the sum of a and b.
    printf("The sum of a and b is: %d\n", sum);  // Here we print the value of sum using printf() function. %d is a format specifier that tells the compiler to expect an integer value.
    return 0;
}
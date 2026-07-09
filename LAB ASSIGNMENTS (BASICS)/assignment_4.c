# include<stdio.h>
/* Write a C program to calculate the sum of two integer numbers 
   (given by the user) and print it. */

int main()
{
    int num1, num2, sum;
    printf("Enter the value of num1:");
    scanf("%d", &num1);   // Here we take input from the user for num1 using scanf() function. %d is a format specifier that tells the compiler to expect an integer value. &num1 is the address of num1 where the input value will be stored.
    printf("Enter the value of num2:");
    scanf("%d", &num2);   // Here we take input from the user for num2 using scanf() function. %d is a format specifier that tells the compiler to expect an integer value. &num2 is the address of num2 where the input value will be stored.
    sum = num1 + num2;
    printf("The sum of num1 and num2 is: %d\n", sum); 
    return 0;
}
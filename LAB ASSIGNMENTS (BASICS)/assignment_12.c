# include<stdio.h>
/* Write a C program to input any ASCII number from user and
   display appropriate character on screen */

int main()
{
    int ascii_num;
    printf("Enter an ASCII number: ");
    scanf("%d", &ascii_num);

    printf("The character for ASCII '%d' is: '%c'\n", ascii_num, ascii_num);
    // Printing with %c translates the integer into its character representation.

    return 0;
}
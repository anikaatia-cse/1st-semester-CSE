# include<stdio.h>
/* Write a C program to accept any character from user and
   display its ASCII number on screen */

int main()
{ 
    char character;
    printf("Enter any character: ");
    scanf(" %c", &character);  // Note the space before %c to clear any leftover newline.

    printf("The ASCII number of '%c' is: %d\n", character, character);
    // Printing with %d shows the underlying ASCII integer value.

    return 0;
}       
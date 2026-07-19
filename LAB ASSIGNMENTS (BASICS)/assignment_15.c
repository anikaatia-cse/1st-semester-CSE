# include<stdio.h>
/* Write a C program to input any Capital letter and
   display it with small letter without using tolower() function. */

int main()
{
    char capital_letter;
    printf("Enter a capital letter: ");
    scanf("%c", &capital_letter);

    char small_letter = capital_letter + 32;
    // Direct mathematical shift using ASCII offset arithmetic.

    printf("Small letter: %c\n", small_letter);
    return 0;
}
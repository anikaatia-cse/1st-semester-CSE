# include<stdio.h>
# include<ctype.h> // Required for tolower()
/* Write a C program to input any Capital letter and 
   display it with small letter. */

int main()
{
    char capital_letter;
    printf("Enter a Capital letter: ");
    scanf("%c", &capital_letter);

    printf("Small letter: %c\n", tolower(capital_letter));

    return 0;
}
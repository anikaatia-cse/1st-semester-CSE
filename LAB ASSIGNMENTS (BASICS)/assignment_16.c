# include<stdio.h>
/* Write a C program to input any Small letter and 
   display it with capital letter without using toupper() function.*/

int main()
{
    char small_letter;
    printf("Enter a Small letter: ");
    scanf("%c", &small_letter);

    char capital_letter = small_letter - 32;
    // Direct mathematical shift using ASCII offset arithmetic.
    
    printf("Capital letter: %c\n", capital_letter);
    return 0;
}   
# include<stdio.h>
# include<ctype.h> // Required for toupper()
/* Write a C program input any Small letter and
   display it with capital letter. */

int main()
{
    char small_letter;
    printf("Enter a small letter: ");
    scanf("%c", &small_letter);

    printf("Capital letter: %c\n", toupper(small_letter));

    return 0;
}
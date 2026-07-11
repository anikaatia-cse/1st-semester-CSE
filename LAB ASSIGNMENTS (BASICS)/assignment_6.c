# include<stdio.h>
/* Write a C program to convert kilometer value
   into meter value*/

int main()
{
    float km, m;
    printf("Enter the value of kilometer:");
    scanf("%f", &km);  /*for input like scanf, you can't use %.1f, 
                         cuz the compiler will not recognize it as a float input,
                         so we always use %f instead. */
    m = km * 1000;
    printf("The value of meter is: %.1f", m);
    return 0; 
}
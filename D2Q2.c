//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("ENTER THE VALUE OF a \n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF b \n");
    scanf("%d", &b);
    printf("SUM : %d \n", (a+b));
    printf("DIFFERENCE : %d \n", abs((a-b)));
    printf("PRODUCT : %d \n", (a*b));
    if(b!=0)
    {
        printf("QUOTIENT : %d \n", (a/b));
    }
    else
    {
        printf("DIVISION BY 0 NOT POSSIBLE \n");
    }
    return(0);
}
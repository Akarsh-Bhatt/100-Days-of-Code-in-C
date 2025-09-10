//Write a program to calculate the factorial of a number.

#include <stdio.h>

void main()
{
    int n,fac=1;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=2;i<=n;i++)
    {
        fac=fac*i;
    }

    printf("FACTORIAL : %d \n", fac);
}
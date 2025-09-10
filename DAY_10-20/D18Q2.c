//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int hcf(int x, int y)
{
    for(int i=y;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
           return(i);
        }
    }
}

void main()
{
    int a,b,x;
    printf("ENTER THE TWO NUMBER \n");
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        x=hcf(a,b);
    }
    else
    {
        x=hcf(b,a);
    }

    printf("HCF : %d", x);
}
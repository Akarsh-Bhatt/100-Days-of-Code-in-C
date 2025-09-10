//Write a program to find the LCM of two numbers.

#include <stdio.h>

int hcf(int x, int y)
{
    for(int i=2;i<=y;i++)
    {
        if(x%i==0 && y%i==0)
        {
           return(i);
        }
    }
    return(1);
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

    printf("LCM : %d", x);
}
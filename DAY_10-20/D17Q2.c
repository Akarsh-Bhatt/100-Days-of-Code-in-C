//Write a program to check if a number is prime.

#include <stdio.h>

void main()
{
    int n,x=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x++;
        }
    }

    if(x==0)
    {
        printf("PRIME NUMBER \n");
    }
    else
    {
        printf("NOT A PRIME NUMBER \n");
    }
}
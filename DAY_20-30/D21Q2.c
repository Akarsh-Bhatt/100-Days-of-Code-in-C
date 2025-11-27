//Write a program to check if a number is a perfect number.

#include <stdio.h>

void main()
{
    int n,sum=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(n==sum)
    {
        printf("PERFECT NUMBER \n");
    }
    else
    {
        printf("NOT A PERFECT NUMBER \n");
    }
}
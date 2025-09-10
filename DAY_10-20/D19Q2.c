//Write a program to find the sum of digits of a number.

#include <stdio.h>

void main()
{
    int n,a,sum=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    while(n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }

    printf("SUM : %d", sum);
}
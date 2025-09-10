//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void main()
{
    int n,a,b=1,d=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    while(n>0)
    {
        a=n%2;
        b=b*10+a;
        n=n/2;
    }

    while(b>0)
    {
        a=b%10;
        d=d*10+a;
        b=b/10;
    }
    d=d/10;

    printf("BINARY EQUIVALENT : %d \n", d);
}
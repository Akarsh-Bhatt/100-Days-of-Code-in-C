//Write a program to reverse a given number.

#include <stdio.h>

void main()
{
    int n,a,b=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    while(n>0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }

    printf("REVERSE : %d", b);
}
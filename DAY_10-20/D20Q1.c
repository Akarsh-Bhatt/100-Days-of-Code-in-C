//Write a program to find the product of odd digits of a number.

#include <stdio.h>

void main()
{
    int n,pr=1,a;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    while(n>0)
    {
        a=n%10;
        if(a%2!=0)
        {
            pr=pr*a;
        }
        n=n/10;
    }

    printf("PRODUCT : %d \n", pr);
}
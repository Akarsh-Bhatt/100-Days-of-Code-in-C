//Write a program to swap the first and last digit of a number.

#include <stdio.h>

void main()
{
    int n,last,first,a,b=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    last=n%10;
    int x=n;
    x=x/10;
    while(x>0)
    {
        a=x%10;
        b=b*10+a;
        x=x/10;
    }

    first=b%10;
    b=b/10;
    int num=last;

    while(b>0)
    {
        a=b%10;
        num=num*10+a;
        b=b/10;
    }

    num=num*10+first;

    printf("%d", num);
}
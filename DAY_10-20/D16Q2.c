//Write a program to check if a number is a palindrome.

#include <stdio.h>

void main()
{
    int n,m,x=0,a;
    printf("ENTER THE NUMBER : \n");
    scanf("%d", &n);
    m=n;

    while(m>0)
    {
        a=m%10;
        x=x*10+a;
        m=m/10;
    }

    if(n==x)
    {
        printf("PALINDROME \n");
    }
    else
    {
        printf("NOT A PALINDROME \n");
    }
}
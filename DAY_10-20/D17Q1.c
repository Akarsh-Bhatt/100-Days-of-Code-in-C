//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

void main()
{
    int n,p=0,sum=0,m,a;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    m=n;

    while(m>0)
    {
        p++;
        m=m/10;
    }

    m=n;

    while(m>0)
    {
        a=m%10;
        sum=sum+((int) (ceil(pow(a,p))));
        m=m/10;
    }

    if(sum==n)
    {
        printf("ARMSTRONG NUMBER \n");
    }
    else
    {
        printf("NOT ARMSTRONG NUMBER \n");
    }
}
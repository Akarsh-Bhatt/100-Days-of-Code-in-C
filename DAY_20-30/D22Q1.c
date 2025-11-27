//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

void main()
{
    int num,a,sum=0,b=1;

    printf("ENTER THE NUMBER \n");
    scanf("%d", &num);

    int n=num;

    while(n>0)
    {
        a=n%10;
        if(a!=0)
        {
            for(int i=a;i>0;i--)
            {
                b=b*i;
            }
            sum=sum+b;
        }
        else
        {
            sum=sum+1;
        }
        n=n/10;
        b=1;
    }

    if(sum==num)
    {
        printf("STRONG NUMBER \n");
    }
    else
    {
        printf("NOT A STRONG NUMBER \n");
    }
}

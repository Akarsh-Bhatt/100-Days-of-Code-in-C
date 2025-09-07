//Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main()
{
    int a,b,c,l;
    printf("ENTETR THE THREE NUMBERS \n");
    scanf("%d %d %d", a, b, c);
    if(a>=b)
    {
        if(a>=c)
        {
            l=a;
        }
        else
        {
            l=c;
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            l=b;
        }
        else
        {
            l=c;
        }
    }
    printf("LARGEST : %d", l);
    return(0);
}
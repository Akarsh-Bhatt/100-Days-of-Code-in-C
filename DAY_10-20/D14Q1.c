//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

void main()
{
    int n,x=0,sum=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=1;i>0;i++)
    {
        if(x==n)
        {
            printf("SUM : %d", sum);
            break;
        }

        x++;
        sum=sum+i;
    }
}
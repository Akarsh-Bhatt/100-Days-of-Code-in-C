//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

void main()
{
    int n,pr=1,x=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=2;i>0;i=i+2)
    {
        if(x==n)
        {
            printf("PRODUCT : %d \n", pr);
            break;
        }

        x++;
        pr=pr*i;
    }
}
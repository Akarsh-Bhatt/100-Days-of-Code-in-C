//Write a program to print all factors of a given number.

#include <stdio.h>

void main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    for(int i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            printf("%d \n", i);
        }
    }
}
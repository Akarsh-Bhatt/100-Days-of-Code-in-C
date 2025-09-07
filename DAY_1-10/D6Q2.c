//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);
    if(n==0)
    {
        printf("ZERO \n");
    }
    else
    {
        if(n>0)
        {
            printf("POSITIVE \n");
        }
        else
        {
            printf("NEGATIVE \n");
        }
    }
    return(0);
}
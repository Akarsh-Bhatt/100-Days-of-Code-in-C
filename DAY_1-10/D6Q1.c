//Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("EVEN NUMBER \n");
    }
    else
    {
        printf("ODD NUMBER \n");
    }
    return(0);
}
//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("ENTER THE NUMBER TILL WHICH THE SUM IS REQUIRRED \n");
    scanf("%d", &n);
    int i;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("SUM OF FIRST n NATURAL NUMBERS : %d", sum);
    return(0);
}
//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    int c=0;
    printf("ENTER THE NUMBER TILL WHICH PRIME NUMBERS ARE REQUIRED \n");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        if(i==2)
        {
            printf("2 \n");
            continue;
        }
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d \n", i);
            continue;
        }
        c=0;
    }
    return 0;
}
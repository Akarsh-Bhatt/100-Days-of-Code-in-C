//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

void main()
{
    int n,a,b=0,d=0;  //b stores 1 beforehand for preventing erasure of 0's in the inverted bin equivalent
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);

    d=n;
    while(d>0)  //inverts the bits of the binary equivalent and stores it in b in inverted form
    {
        a=d%10;
        if(a==0)
        {
            a=1;
        }
        else
        {
            a=0;
        }
        b=b*10+a;
        d=d/10;
    }
    int e=b;
    int f=0;
    while(e>0)  //inverts the bin value 
    {
        a=e%10;
        f=f*10+a;
        e=e/10;
    }  

    printf("%d", f);
}
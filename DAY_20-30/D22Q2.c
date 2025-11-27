//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main()
{
    int n;
    float sum=1,a=3,b=4;

    printf("ENTER THE NUMBER OF TERMS OF THE SERIES REQUIRED \n");
    scanf("%d", &n);
    n=n-1;
    for(int i=0;i<n;i++)
    {
        sum=sum+(a/b);
        a=a+2;
        b=b+2;
    }

    printf("APPROX SUM : %.2f", sum);
    return 0;
}
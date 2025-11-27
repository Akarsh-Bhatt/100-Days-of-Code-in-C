//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
#include <conio.h>

int main()
{
    float a=2,b=3;
    int n;
    float sum=0;
    printf("ENTER THE NUMBER OF TERMS \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        sum=sum+(a/b);
        a=a+2;
        b=b+4;
    }

    printf("APPROX SUM : %.2f \n", sum);
    return 0;
}
//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

void main()
{
    double cp,sp,p,l;
    printf("ENTER THE COST PRICE AND SELLING PRICE \n");
    scanf("%lf %lf", &cp, &sp);
    if(sp>cp)
    {
        p=((sp-cp)/cp)*100;
        printf("PROFIT : %.2f% \n", p);
    }
    else
    {
        l=((cp-sp)/cp)*100;
        printf("LOSS : %.2f% \n", l);
    }
}
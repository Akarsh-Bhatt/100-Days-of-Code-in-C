//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,x,r1,r2;
    printf("ENTER THE VALUE OF a in the form ax^2 + bx + c \n");
    scanf("%lf", &a);
    printf("ENTER THE VALUE OF b in the form ax^2 + bx + c \n");
    scanf("%lf", &b);
    printf("ENTER THE VALUE OF c in the form ax^2 + bx + c \n");
    scanf("%lf", &c);
    x=pow(b,2)-(4*a*c);
    if(x>=0)
    {
        r1=(-b+pow(x,0.5))/(2*a);
        r2=(-b-pow(x,0.5))/(2*a);
        if(r1==r2)
        {
            printf("REAL & EQUAL ROOTS : %.1f \n", r1);
        }
        else
        {
            printf("REAL & UNEQUAL ROOTS : %.1f , %.1f \n", r1, r2);
        }
    }
    else if(x<0)
    {
        printf("ROOTS ARE COMPLEX \n");
    }
    return(0);
}
//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main()
{
    double a=0,b=0,c=0;
    printf("ENTER THE THREE SIDES \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("EQUILATERAL TRIANGLE \n");
    }
    else if(a==b || b==c || c==a)
    {
        printf("ISOSCELES TRIANGLE");
    }
    else
    {
        printf("SCALENE TRIANGLE \n");
    }
    return(0);
}
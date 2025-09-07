//Write a program to calculate the area and circumference of a circle given its radius.

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main()
{
    double rad;
    printf("ENTER THE RADIUS \n");
    scanf("%lf", &rad);
    printf("AREA : %f \n", ( M_PI*rad*rad));
    printf("PERIMETER : %f \n", (2*M_PI*rad));
    return(0);
}
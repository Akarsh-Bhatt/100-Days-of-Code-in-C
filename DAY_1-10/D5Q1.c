//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    float pr, rate, t;
    printf("ENTER THE PRINCIPAL AMOUNT \n");
    scanf("%f", &pr);
    printf("ENTER THE RATE \n");
    scanf("%f", &rate);
    printf("ENTER THE TIME \n");
    scanf("%f", &t);
    float SI=(pr*rate*t)/100;
    printf("SIMPLE INTEREST : %f \n", SI);
    float CI=pr*(pow((100+rate),t)/pow(100,t))-pr;
    printf("COMPOUND INTEREST : %f \n", CI);
    return(0);
}
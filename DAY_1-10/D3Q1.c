//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    double temp;
    printf("ENTER THE TEMPERATURE IN CELCIUS \n");
    scanf("%lf", &temp);
    printf("TEMPERATURE IN FAHRENHIET : %f", ((temp*1.8)+32));
    return(0);
}
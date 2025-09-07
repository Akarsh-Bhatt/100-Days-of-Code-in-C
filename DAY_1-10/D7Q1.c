//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE YEAR \n");
    scanf("%d", &n);
    if(n%400==0)
    {
        printf("LEAP YEAR \n");
    }
    else if(n%100==0)
    {
        printf("NOT A LEAP YEAR \n");
    }
    else if(n%4==0)
    {
        printf("LEAP YEAR \n");
    }
    else
    {
        printf("NOT A LEAP YEAR \n");
    }
    return(0);
}
//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("ENTER 1st NUMBER \n");
    scanf("%d", &a);
    printf("ENTER 2nd NUMBER \n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("NUMBER 1 : %d NUMBER 2 : %d \n", a , b);
    return(0);

}
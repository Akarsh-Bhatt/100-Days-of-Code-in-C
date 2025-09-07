//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a,b;
    printf("ENTER THE VALUE OF A :- \n");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF B :- \n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("VALUE OF A : %d \n", a);
    printf("VALUE OF B : %d \n", b);
    return(0);

}
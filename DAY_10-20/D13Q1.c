//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    char ch;
    printf("ENTER THE ARITHEMATIC SYMBOL TO DO THE OPERATION \n");
    scanf("%c", &ch);
    printf("ENTER THE VALUES TO OPERATE ON \n");
    scanf("%d %d", &a, &b);

    switch(ch)
    {
        case '+' : 
        printf("SUM : %d \n", (a+b));
        break;
        case '-' : 
        printf("SUBTRACTION : %d \n", abs(a-b));
        break;
        case '*' : 
        printf("MULTIPLICATION : %d \n", (a*b));
        break;
        case '/' : 
        if(b==0)
        {
            printf("DIVISION BY ZERO IS NOT POSSIBLE \n");
        }
        else
        {
            printf("DIVISION : %d \n", (a/b));
        }
        break;
        case '%' : 
        printf("REMAINDER : %d \n", (a%b));
        break;
    }
}
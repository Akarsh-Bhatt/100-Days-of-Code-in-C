/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
  */

#include <stdio.h>

int main()
{
    for(int j=1;j<=5;j=j+2)
    {
        for(int k=1;k<=j;k++)
        {
            printf("* \n");
        }
        printf("\n");
    }

    for(int l=3;l>0;l=l-2)
    {
        for(int m=1;m<=l;m++)
        {
            printf("* \n");
        }
        printf("\n");
    }
    return 0;
}
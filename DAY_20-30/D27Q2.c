/*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *  */

#include <stdio.h>

int main()
{
    int a=3;
    for(int i=1;i<=7;i=i+2)
    {
        for(int j=1;j<=a;j++)
        {
            printf(" ");
        }
        a--;
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    a=1;

    for(int l=5;l>0;l=l-2)
    {
        for(int m=1;m<=a;m++)
        {
            printf(" ");
        }
        a++;
        for(int n=1;n<=l;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
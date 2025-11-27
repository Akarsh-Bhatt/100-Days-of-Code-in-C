/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */

#include <stdio.h>

int main()
{
    int k=5;
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            printf(" ");
        }
        for(int l=k;l<=5;l++)
        {
            printf("%d",l);
        }
        k--;
        printf("\n");
    }
    return 0;
}
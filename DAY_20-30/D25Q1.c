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
    for(int i=5;i>0;i--)
    {
        for(int j=k;j<=5;j++)
        {
            printf("%d ",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}
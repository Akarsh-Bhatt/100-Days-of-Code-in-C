//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int arr[50][50];
int s;
int sm=0;

void input()
{
    printf("ENTER THE SIZE OF THE MATRIX \n");
    scanf("%d", &s);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("ENTER ELEMENT OF [%d][%d] \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void sum()
{
    for(int i=0;i<s;i++)
    {
        sm=sm+arr[i][i];
    }
}
int main()
{
    input();
    sum();
    printf("SUM : %d \n", sm);
}
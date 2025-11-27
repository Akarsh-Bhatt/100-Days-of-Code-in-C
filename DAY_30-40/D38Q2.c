//Check if a matrix is symmetric.
#include <stdio.h>

int arr[50][50];
int s;
int tran[50][50];

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
void transpose()
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            tran[i][j]=arr[j][i];
        }
    }
}
int compare()
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(tran[i][j]==arr[i][j])
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    input();
    transpose();
    int x=compare();
    if(x==1)
    {
        printf("SYMMETRIC \n");
    }
    else
    {
        printf("NOT SYMMETRIC \n");
    }
    return 0;
}
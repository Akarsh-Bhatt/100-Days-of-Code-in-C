//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int arr[50][50];
int s;

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
int check()
{
    for(int i=0;i<s-1;i++)
    {
        if(arr[i][i]==arr[i+1][i+1])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    input();
    int x=check();
    if(x==1)
    {
        printf("ALL DIAGONAL ELEMENTS ARE SAME \n");
    }
    else
    {
        printf("ALL DIAGONAL ELEMENTS ARE NOT SAME \n");
    }
    return 0;
}
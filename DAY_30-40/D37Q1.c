//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int arr[50][50];
    int r,c;
    int sum=0;
    int ar[50];
    printf("ENTER THE NUMBER OF ROWS \n");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS \n");
    scanf("%d", &c);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF [%d][%d] \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        ar[i]=sum;
        sum=0;
    }
    for(int i=0;i<r;i++)
    {
        printf("SUM OF ROW %d : %d \n", i, ar[i]);
    }
    return 0;
}
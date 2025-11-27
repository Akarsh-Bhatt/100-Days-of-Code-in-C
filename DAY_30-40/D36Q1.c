//Read and print a matrix.
#include <stdio.h>

int main()
{
    int arr[50][50];
    int r,c;
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

    printf("MATRIX : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
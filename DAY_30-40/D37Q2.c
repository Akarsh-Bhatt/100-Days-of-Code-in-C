//Find the transpose of a matrix
#include <stdio.h>

int arr1[50][50];
int r,c;
int arr2[50][50];

void input()
{
    printf("ENTER THE NUMBER OF ROWS \n");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS \n");
    scanf("%d", &c);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF [%d][%d] \n", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
}
void transpose()
{
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr2[i][j]=arr1[j][i];
        }
    }
}
void print()
{
    printf("TRANSPOSE : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    input();
    transpose();
    print();
}
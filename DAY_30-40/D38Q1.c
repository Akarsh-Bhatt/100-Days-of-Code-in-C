//Add two matrices.

#include <stdio.h>

int arr1[50][50];
int r,c;
int arr2[50][50];
int sum[50][50];

void input(int ar[][50])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("ENTER ELEMENT OF [%d][%d] \n", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
}
void add()
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}
void print()
{
    printf("MATRIX : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("ENTER THENUMBER OF ROWs \n");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS \n");
    scanf("%d", &c);
    printf("ENTER ELEMENTS OF FIRST ARRAY \n");
    input(arr1);
    printf("ENTER THE ELEMENST OF THE SECOND ARRAY \n");
    input(arr2);
    add();
    print();

}
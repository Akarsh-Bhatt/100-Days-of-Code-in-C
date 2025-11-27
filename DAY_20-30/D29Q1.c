//Find the sum of array elements.

#include <stdio.h>

int main()
{
    int arr[30];
    int n;
    int sum=0;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        sum=sum+arr[j];
    }

    printf("SUM : %d", sum);
    return 0;
}
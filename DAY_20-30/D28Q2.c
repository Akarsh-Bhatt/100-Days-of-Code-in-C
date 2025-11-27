//Read and print elements of a one-dimensional array.

#include <stdio.h>

int main()
{
    int arr[30];
    int n;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        printf("%d  ", arr[j]);
    }
    return 0;
}
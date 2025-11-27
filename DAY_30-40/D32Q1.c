//Merge two arrays

#include <stdio.h>

int main()
{
    int arr1[50];
    int arr2[50];
    int farr[50];
    int n1,n2;
    printf("ENTER THE SIZE OF FIRST ARRAY \n");
    scanf("%d", &n1);
    printf("ENTER THE ELEMENTS OF THE FIRST ARRAY \n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("ENTER THE SIZE OF SECOND ARRAY \n");
    scanf("%d", &n2);
    printf("ENTER THE ELEMENTS OF THE SECOND ARRAY \n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d", &arr2[i]);
    }

    for(int i=0;i<n2;i++)
    {
        arr1[n1]=arr2[i];
        n1++;
    }

    for(int i=0;i<n1;i++)
    {
        printf("%d ", arr1[i]);
    }
    return 0;
}
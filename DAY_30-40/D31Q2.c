//Reverse an array without taking extra space.

#include <stdio.h>

int main()
{
    int arr[50];
    int n;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int j=n-1;
    int c=0;

    for(int i=0;i<n/2;i++)
    {
        c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
}
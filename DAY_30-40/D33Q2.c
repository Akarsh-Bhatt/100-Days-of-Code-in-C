//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int arr[50];
    int n,num;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY IN ASCENDING ORDER \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE NUMBER TO INSERT \n");
    scanf("%d", &num);
    arr[n]=num+1;
    for(int i=0;i<n;i++)
    {
        if(num>arr[i] && num<arr[i+1])
        {
            for(int j=n;j>i+1;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i+1]=num;
            n=n+1;
        }
    }

    printf("NEW ARRAY : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
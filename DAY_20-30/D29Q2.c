//Find the maximum and minimum element in an array.

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
    int x=n,y;
    int a;
    int i=0;
    while(x>0)
    {
        for(int i=0;i<(x-1);i++)
        {
            if(arr[i]>arr[i+1])
            {
                a=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=a;
            }
        }
        x=x-1;
    }

    printf("SMALLEST NUMBER : %d \n", arr[0]);
    printf("LARGEST NUMBER  : %d \n", arr[n-1]);
    return 0;
}
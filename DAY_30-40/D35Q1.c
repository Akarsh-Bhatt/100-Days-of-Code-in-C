//Find the second largest element in an array
#include <stdio.h>

int main()
{
    int arr[50];
    int n,x,y;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    x=arr[0];
    for(int i=1;i<n;i++)
    {
        if(x<arr[i])
        {
            y=x;
            x=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("SECOND LARGEST : %d", y);
    return 0;
}
//Search in a sorted array using binary search.

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
    printf("ENTER THE NUMBER TO SEARCH FOR \n");
    scanf("%d", &num);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            printf("SEARCH SUCCESSFULL \n");
            return 0;
        }
    }
    printf("SEARCH UNSUCCESSFULL \n");
    return 0;
}
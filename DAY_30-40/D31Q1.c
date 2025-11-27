//Search for an element in an array using linear search.

#include <stdio.h>

int main()
{
    int arr[30];
    int n;
    int x=0;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED \n");
    scanf("%d", &x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("SEARCH SUCCESSFULL! \n");
            return 0;
        }
    }
    printf("SEARCH UNSUCCESSFULL! \n");
    return 0;
}
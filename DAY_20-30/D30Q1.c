//Count even and odd numbers in an array.

#include <stdio.h>

int main()
{
    int arr[30];
    int n;
    int x;
    int even=0,odd=0;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        x=arr[i];
        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("EVEN NUMBERS : %d \n", even);
    printf("ODD NUMBERS  : %d \n", odd);
    return 0;
}
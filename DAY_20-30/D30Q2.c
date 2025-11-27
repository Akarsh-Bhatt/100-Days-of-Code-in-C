//Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main()
{
    int arr[30];
    int n;
    int x;
    int pos=0,neg=0, zero=0;
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        x=arr[i];
        if(x==0)
        {
            zero++;
        }
        else if(x>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    printf("POSITIVE NUMBERS : %d \n", pos);
    printf("NEGITIVE NUMBERS : %d \n", neg);
    printf("ZERO NUMBERS     : %d \n", zero);
    return 0;
}
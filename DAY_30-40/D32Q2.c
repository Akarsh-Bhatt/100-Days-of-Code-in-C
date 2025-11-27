//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    int arr[]={0,0,0,0,0,0,0,0,0,0};
    int n,a=0;
    printf("ENTER THE NUMBER \n");
    scanf("%d", &n);
    int x=n;
    while(x>0)
    {
        a=x%10;
        arr[a]++;
        x=x/10;
    }
    int index=0;
    int max=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]<arr[i+1])
        {
            max=arr[i+1];
            index=i+1;
        }
    }

    printf("NUMBER WITH HIGHEST FREQUENCY : %d \n", arr[index]);
    printf("MAX FREQUENCY : %d \n", max);
    return 0;
}
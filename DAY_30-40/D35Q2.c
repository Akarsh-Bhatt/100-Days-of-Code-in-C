//Rotate an array to the right by k positions.
#include <stdio.h>

int arr[50];
int n,pos,x;

void input ()
{
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE NUMBER OF PLACES TO ROTATE \n");
    scanf("%d", &pos);
}
void shift()
{
    x=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}
void print()
{
    printf("NEW ARRAY : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    input();
    for(int i=0;i<pos;i++)
    {
        shift();
    }
    print();
    return 0;
}
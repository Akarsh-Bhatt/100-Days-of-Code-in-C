//Delete an element from an array
#include <stdio.h>

int arr[50];
int n,pos;
int count;

int input()
{
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE POSITION OF THE ELEMENT TO DELETE \n");
    scanf("%d", &pos);
    count=pos-1;
}
void pull()
{
    arr[count]=arr[count+1];
    ++count;
}
void print()
{
    printf("NEW ARRAY : \n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    input();
    int x=(n-pos);
    for(int i=0;i<x;i++)
    {
        pull();
    }
    arr[n-1]='\0';
    print();
    return 0;
}
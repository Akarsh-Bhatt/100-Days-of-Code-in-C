//Q67: Insert an element in an array at a given position.
#include <stdio.h>
int arr[50];
int n;
int num,pos;
int count;
void input()
{
    printf("ENTER THE SIZE OF THE ARRAY \n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS OF THE ARRAY \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE POSITION AT WHICH THE NUMBER IS TO BE INSERTED \n");
    scanf("%d", &pos);
    printf("ENTER THE NUMBER TO INSERT \n");
    scanf("%d", &num);
    count=n-1;
}
void push()
{
    arr[count+1]=arr[count];
    --count;
}
void print()
{
    for(int i=0;i<n+1;i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    input();
    int x=(n-pos)+1;
    for(int i=1;i<=x;i++)
    {
        push();
    }
    arr[pos-1]=num;
    print();
}
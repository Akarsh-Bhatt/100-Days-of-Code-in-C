//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main()
{
    int n,sec=0,min=0,hr=0;
    printf("ENTER THE SECONDS \n");
    scanf("%d", &n);
    hr=n/3600;
    sec=n%3600;
    min=sec/60;
    sec=sec%60;
    if(sec==60)
    {
        sec=0;
        min=min+1;
    }
    else if(min==60)
    {
        min=0;
        hr=hr+1;
    }
    printf("TIME : %d : %d : %d \n", hr, min, sec);
    return(0);
}
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int len,br;
    printf("ENTER THE LENGTH \n");
    scanf("%d", &len);
    printf("ENTER THE BREADTH \n");
    scanf("%d", &br);
    printf("PERIMETER : %d \n", ((2*len)+(2*br)));
    printf("AREA : %d \n", (len*br));
    return(0);
}
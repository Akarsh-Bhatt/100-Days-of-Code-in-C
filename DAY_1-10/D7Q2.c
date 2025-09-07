//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    printf("ENTER THE CHARACTER \n");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("VOWEL \n");
    }
    else
    {
        printf("CONSONANT");
    }
    return(0);
}
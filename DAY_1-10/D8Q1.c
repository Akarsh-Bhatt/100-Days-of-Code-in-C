//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    printf("ENTER THE CHARACTER \n");
    scanf("%c", &ch);
    if(ch>=48 && ch<=57)
    {
        printf("DIGIT \n");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("LOWERCASE ALPHABET \n");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("UPPERCASE ALPHABET \n");
    }
    else 
    {
        printf("SPECIAL CHARACTER \n");
    }
    return(0);
}
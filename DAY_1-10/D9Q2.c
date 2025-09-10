/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
  90-100: Grade A
  80-89: Grade B
  70-79: Grade C
  60-69: Grade D
  below 60: Grade F. */

  #include <stdio.h>

  int main()
  {
    int x;
    printf("ENTER THE PERCENTAGE \n");
    scanf("%d", &x);
    if(x>=90)
    printf("Grade A \n");
    else if(x>=80 && x<90)
    printf("Grade B \n");
    else if(x>=70 && x<80)
    printf("Grade C \n");
    else if(x>=60 && x<70)
    printf("Grade D \n");
    else if(x<60)
    printf("Grade F \n");

    return(0);
  }
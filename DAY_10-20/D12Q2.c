/*Write a program to calculate electricity bill based on units consumed with these rates:
  First 100 units at ₹5/unit
  Next 100 units at ₹7/unit
  Next 100 units at ₹10/unit
  Above at ₹12/unit */

  #include <stdio.h>

  void main()
  {
    double units,bill;
    printf("ENTER THE NUMBER OF UNITS CONSUMED \n");
    scanf("%lf", &units);

    if(units>=300)
    {
        bill=100*5+100*7+100*10+((units-300)*12);
    }
    else if(units<300 && units>=200)
    {
        bill=500+700+((units-200)*10);
    }
    else if(units<200 && units>=100)
    {
        bill=500+((units-100)*7);
    }
    else if(units<100)
    {
        bill=units*5;
    }

    printf("ELECTRICITY BILL : %.2f \n", bill);
  }
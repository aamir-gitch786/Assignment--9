/******************************************************************************
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   float surcharge;
   printf("Enter total electricity unit charges : ");
   scanf("%d",&n);
   if(n<=0)
   {printf("NO bill ");
   return 0;}
   switch(n)
   {
       case 1 ... 50 :
        surcharge=(n*0.50)*0.20;
        printf("Your electricity bill is :%0.2f",surcharge+(n*0.50));
        break;
       case 51 ... 150 :
        surcharge=(25+ (n-50)*0.75)*0.20;
        printf("Your electricity bill is :%0.2f", surcharge+(25+ (n-50)*0.75));
        break;
       case 151 ... 250 :
        surcharge=(100+(n-150)*1.20)*0.20;
        printf("Your electricity bill is :%0.2f",surcharge+(100+(n-150)*1.20));
        break;
       default:
        surcharge =(220+(n-250)*1.50 )*0.20;
        printf("Your electricity bill is :%0.2f",surcharge+(220+(n-250)*1.50 ));

   }
    return 0;
}


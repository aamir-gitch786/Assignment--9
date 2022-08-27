/******************************************************************************
6. Program to check whether a year is a leap year or not. Using switch
statement
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   printf("Enter the year : ");
   scanf("%d",&n);
   //if((n%400==0) || (n%4==0 && n%100!=0))
   switch((n%400==0) || (n%4==0 && n%100!=0))
   {
       case 1:
       printf("Yes , %d is leap year",n);
       break;
       case 0:
       printf("No ,%d is not a leap year",n);
       break;

   }
    return 0;
}


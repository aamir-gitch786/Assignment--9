/******************************************************************************
9. Program to Convert even number into its upper nearest odd number
Switch Statement.
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,a;
   printf("Enter even number :");
   scanf("%d",&n);
   a=(n%2==0)?1:2;
   switch(a)
   {
       case 1:
       printf(" %d \nIts upper nearest odd number is %d ",n,n+1);
       break;
       case 2:
       printf("You have entered odd number\n");
       
       
       
   }
   
    return 0;
}


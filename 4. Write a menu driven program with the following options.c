/******************************************************************************
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,n;
    printf("Enter your choice \n");
    printf("\n1.Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n2.Check whether a given set of three numbers are lengths of sides ofa right angled triangle or not");
    printf("\n3.Check whether a given set of three numbers are equilateral triangle or not");
    printf("\n4.Exit\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Enter the set of three numbers : ");
        scanf("%d%d%d",&a,&b,&c);
        if((a==b )|| ( b==c) || (c==a) )
        printf("Yes , Given set of three numbers %d ,%d and %d are lengths of an isosceles triangle ",a,b,c);
        else
        printf("No , Given set of three numbers %d ,%d and %d are not lengths of an isosceles triangle ",a,b,c);
        break;
    case 2:
         printf("Enter the set of three numbers : ");
         scanf("%d%d%d",&a,&b,&c);
         if(a>0 && b>0 && c>0)
          {
           if(((a*a+b*b)==c*c) ||((c*c+a*a)==b*b)||((c*c+b*b)==a*a) )
           printf("Yes , these three sides are a sides of right angle triangle");
           else
         printf("No , these three sides are not a sides of right angle triangle");
         break;
          }
          else
         printf("No , these three sides are not a sides of right angle triangle");
         break;

    case 3:
         printf("Enter the set of three numbers : ");
         scanf("%d%d%d",&a,&b,&c);
         if(a==b && b==c)
         printf("Yes , these three stdes are a sides of equilateral triangle. ");
         else
         printf("No , these three stdes are not  a sides of equilateral triangle. ");
         break;
    case 4:
      printf("Program exite .");
      break;
    default :
    printf("You enter wrong option");

    }

    return 0;
}


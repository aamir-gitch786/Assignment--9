/******************************************************************************
2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,a,b;
do {  printf("Enter your choice :");

     printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
     scanf("%d",&n);
     switch(n)
     {
       case 1:
       printf("Enter the two numbers : ");
       scanf("%d%d",&a,&b);
       printf("Addition of %d and %d is : %d\n",a,b,a+b);
       break;
       case 2:
       printf("Enter the two numbers : ");
       scanf("%d%d",&a,&b);
       printf("Subtraction of %d and %d is : %d\n",a,b,a-b);
       break;
       case 3:
       printf("Enter the two numbers : ");
       scanf("%d%d",&a,&b);
       printf("Multiplication of %d and %d is : %d\n",a,b,a*b);
       break;
       case 4:
       printf("Enter the two numbers : ");
       scanf("%d%d",&a,&b);
       printf("The Division(Quotient) of %d and %d is : %d\n",a,b,a/b);
       break;
       case 5:
       printf("Exite program \n");
       break;
       default:
       printf("Enter the valid choice\n");
      }
    }while(n!=5);
    return 0;
}


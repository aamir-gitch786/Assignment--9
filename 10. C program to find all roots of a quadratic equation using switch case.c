/******************************************************************************
10. C program to find all roots of a quadratic equation using switch case
*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
   float a, b, c,D;
   int indicator;
   printf("Enter the value of a , b and c : ");
   scanf("%f%F%F",&a,&b,&c);
   D=sqrt(pow(b,2)-4*a*c);
   indicator=(D>=0)? (D==0)? 1:2: 3;
  switch(indicator)
  {
      case 1:
      printf("Root are real and equal : %0.2f , %0.2f",((-b)/(2*a)),((-b)/(2*a)));
      break;
      case 2:
      printf("Root are real and unequal : %0.2f , %0.2f",((-b+D)/(2*a)),((-b-D)/(2*a)));
      break;
      case 3:
      printf("Root are imaginary and unequal : %0.2f , %0.2f",((-b+D)/(2*a)),((-b-D)/(2*a)));
      break;

  }
    return 0;
}


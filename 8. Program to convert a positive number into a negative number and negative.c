/******************************************************************************
8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=(n>=0)? (n==0)? 1:2 : 3;

    switch(a)
    {
        case 1:
        printf("%d is neither positive nor negative.",n);
        break;
        case 2:
        printf("Negative  number of %d is : %d",n,-1*n);
        break;
        case 3:
        printf("Positive  number of %d is : %d",n,-1*n);
    }

    return 0;
}


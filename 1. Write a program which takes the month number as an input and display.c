/******************************************************************************
1. Write a program which takes the month number as an input and display
number of days in that month.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the month number\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("January : 31 Days");
        break;
        case 2:
        printf("February : 28 Days");
        break;
        case 3:
        printf("March : 31 Days");
        break;
        case 4:
        printf("April : 30 Days");
        break;
        case 5:
        printf("May : 31 Days");
        break;
        case 6:
        printf("June : 30 Days");
        break;
        case 7:
        printf("July : 31 Days");
        break;
        case 8:
        printf("August : 31 Days");
        break;
        case 9:
        printf("September : 30 Days");
        break;
        case 10:
        printf("October : 31 Days");
        break;
        case 11:
        printf("November : 30 Days");
        break;
        case 12:
        printf("December : 31 Days");
        break;
        default:
        printf("Please enter the valied number");

    }

    return 0;
}


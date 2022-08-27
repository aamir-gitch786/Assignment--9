/******************************************************************************
3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the day number ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Look for opportunities in every change in your life.");
        break;
        case 2:
        printf("The story of life is quicker than the wink of an eye.");
        break;
        case 3:
        printf("Life is a question and how we live it is our answer");
        break;
        case 4:
        printf("Accept life as it is. Then work to make it the way you want it to be.");
        break;
        case 5:
        printf("Life is a long lesson in humility.");
        break;
        case 6:
        printf("Everyone's life is a fairy tale, written by God's fingers.");
        break;
        case 7:
        printf("A fool always finds a greater fool to admire him.");
        break;
        default:
        printf("You enter worng number \nExite program.");
    }

    return 0;
}


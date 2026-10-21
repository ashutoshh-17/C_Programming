#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Input         : Integer
//  Output        : None
//  Description   : Checks if a number is even or odd
//  Date          : 21/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
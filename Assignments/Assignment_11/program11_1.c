#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Input         : 23  35
//  Output        : 23  24  25  26  27  28  29  30  31  32  33  34  35
//  Description   : Write a program which accept range from user and display all numbers in between that range.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int i = 0;
    for (i = iStart; i <= iEnd; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);
    return 0;
}
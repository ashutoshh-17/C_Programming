#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Input         : 23  35
//  Output        : 35 34  33  32  31  30  29  28  27  26  25  24  23
//  Description   : Write a program which accept accept range from user and display all numbers in between that range in reverse order.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int i = 0;
    for (i = iEnd; i >= iStart; i--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
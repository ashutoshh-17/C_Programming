#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Input         : 23  35
//  Output        : 24  26  28  30  32  34
//  Description   : Write a program which accept range from user and display all even numbers in between that range.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0;
    for (i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}
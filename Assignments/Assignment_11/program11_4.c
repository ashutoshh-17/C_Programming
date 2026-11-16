#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Input         : 23  30
//  Output        : 108
//  Description   : Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int i = 0, iSum = 0;
    for (i = iStart; i <= iEnd; i++)
    {
        if (i % 2 == 0)
        {
            iSum += i;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is: %d\n", iRet);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Input         : 12
//  Output        : -34
//  Description   : Write a program which accept number from user and return summation of all of its factors and non factors.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactSum += iCnt;
        }
        else
        {
            iNonFactSum += iCnt;
        }
    }
    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d", iRet);

    return 0;
}
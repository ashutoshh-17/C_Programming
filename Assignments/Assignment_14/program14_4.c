#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Input         : 12
//  Output        : 50
//  Description   : Write a program which accept number from user and return summation of all of its non factors.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n", iRet);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Input         : 5
//  Output        : -7 (8 - 15)
//  Description   : Write a program which returns difference between Even factorial and odd factorial of given number.
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iEvenFact *= i;
        }
        else
        {
            iOddFact *= i;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Input         : 2395
//  Output        : 1
//  Description   : Write a program which accept number from user and return the count of digits in between 3 and 7.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);
    printf("Frequency of digits in between 3 and 7 is: %d\n", iRet);

    return 0;
}
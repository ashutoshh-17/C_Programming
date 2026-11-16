#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Count
//  Input         : 2395
//  Output        : 3
//  Description   : Write a program which accept number from user and count frequency of such a digit which is less than 6.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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

    iRet = Count(iValue);
    printf("Frequency of digits less than 6 is: %d\n", iRet);

    return 0;
}
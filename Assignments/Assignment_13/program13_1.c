#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Input         : 2395
//  Output        : 1
//  Description   : Write a program which accept number from user and return the count of even digits.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("Frequency of even digits is: %d\n", iRet);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : CountFour
//  Input         : 2395
//  Output        : 0
//  Description   : Write a program which accept number from user and count frequency of 4 in it.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
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

    iRet = CountFour(iValue);
    printf("Frequency of 4 is: %d\n", iRet);

    return 0;
}
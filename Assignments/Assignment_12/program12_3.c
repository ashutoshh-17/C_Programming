#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Input         : 2395
//  Output        : 1
//  Description   : Write a program which accept number from user and count frequency of 2 in it.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("Frequency of 2 is: %d\n", iRet);

    return 0;
}
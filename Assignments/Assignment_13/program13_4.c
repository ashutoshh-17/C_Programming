#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Input         : 2395
//  Output        : 270
//  Description   : Write a program which accept number from user and return multiplication of all digits
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult *= iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of all digits is: %d\n", iRet);

    return 0;
}
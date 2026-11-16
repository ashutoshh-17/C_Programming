#include <stdio.h>


////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Input         : 5  4  7
//  Output        : 140
//  Description   : Write a program which accept three numbers and print its multiplication.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if (iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        return 0;
    }

    return (iNo1 * iNo2 * iNo3);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is: %d\n", iRet);

    return 0;
}
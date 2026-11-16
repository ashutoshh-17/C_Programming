#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Input         : 12
//  Output        : 144  (1 * 2 * 3 * 4 * 6)
//  Description   : Write a program which accept number from user and display its multiplication of factors.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("%d\n", iRet);

    return 0;
}
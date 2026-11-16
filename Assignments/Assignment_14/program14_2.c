#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input         : 12
//  Output        : 6  4  3  2  1
//  Description   : Write a program which accept number from user and display its factors in descending order.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("%d\n", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
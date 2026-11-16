#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Input         : 12
//  Output        : 6  4  3  2  1
//  Description   : Write a program which accept number from user and display its non factors.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
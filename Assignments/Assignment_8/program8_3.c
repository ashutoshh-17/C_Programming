#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Input         : 5
//  Output        : 120 (5 * 4 * 3 * 2 * 1)
//  Description   : Write a program to find factorial of given number
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        iFact *= i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
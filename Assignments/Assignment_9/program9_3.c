#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Input         : 5
//  Output        : 8 (4 * 2)
//  Description   : Write a program to find even factorial of given number
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            iFact *= i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial is %d", iRet);

    return 0;
}
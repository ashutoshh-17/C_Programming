// Accept one number from user and print that number of * on screen

#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Input         : Integer
//  Output        : None
//  Description   : Prints that number of * on screen
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
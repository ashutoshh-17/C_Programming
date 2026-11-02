#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Input         : 5
//  Output        : 0.464515
//  Description   : Write a program which accept area in square feet and convert it into square
//                  meter. (1 square feet = 0.0929 Square meter)
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    return iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf", dRet);

    return 0;
}
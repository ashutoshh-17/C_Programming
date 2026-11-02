#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Input         : 5
//  Output        : 5000
//  Description   : Write a program which accept distance in kilometre and convert it into meter. (1
//                  kilometre = 1000 Meter)
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter distance");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d", iRet);

    return 0;
}
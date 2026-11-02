#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Input         : 10
//  Output        : -12.2222
//  Description   : Write a program which accept temperature in Fahrenheit and convert it into
//                  celsius. (1 celsius = (Fahrenheit -32) * (5/9))
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf", dRet);

    return 0;
}
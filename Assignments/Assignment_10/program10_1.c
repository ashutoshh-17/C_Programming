#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Input         : 5.3
//  Output        : 88.2026
//  Description   : Write a program which accept radius of circle from user and calculate its area.
//  Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f", dRet);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Input         : 5.3 9.78
//  Output        : 51.834
//  Description   : Write a program which accept width & height of rectangle from user and calculate
//                  its area. (Area = Width * Height)
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    printf("Enter width: ");
    scanf("%f", &fValue1);
    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %f", dRet);

    return 0;
}
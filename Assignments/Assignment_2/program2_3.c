#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None
//  Description   : Prints "Hello" if number is less than 10, otherwise prints "Demo"
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
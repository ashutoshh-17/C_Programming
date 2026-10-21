#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Input         : Integer
//  Output        : None
//  Description   : Checks if a year is a leap year
//  Date          : 21/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
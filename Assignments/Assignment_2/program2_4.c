#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer, Integer
//  Output        : None
//  Description   : Prints the number a specified number of times
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int i = 0;

    // Write Updater
    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
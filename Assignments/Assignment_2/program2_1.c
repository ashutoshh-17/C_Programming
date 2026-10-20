#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : Integer
//  Output        : None
//  Description   : Prints that number of * on screen
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    // Write Updater
    while(iCnt < iNo)
    {
        printf("* ");
        iCnt++;
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
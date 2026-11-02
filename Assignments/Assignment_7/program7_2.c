#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : 8
//  Output        : 1   2   3   4   5   6   7   8
//  Description   : Prints a pattern of numbers from 1 to iNo
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
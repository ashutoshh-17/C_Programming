#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : 4
//  Output        : -4 -3 -2 -1 0 1 2 3 4
//  Description   : Prints a pattern of number line
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    for(int i = -iNo; i <= iNo; i++)
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
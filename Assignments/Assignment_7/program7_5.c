#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Input         : 4
//  Output        : 4   8   12   16   20
//  Description   : Write a program which accept N and print first 5 multiples of N.
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\t", i * iNo);
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
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Input         : 18
//  Output        : 1   3   5   7   9   11   13
//  Description   : Prints a pattern of odd numbers from 1 to N
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
        printf("%d\t", i);
        }
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
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Input         : 3
//  Output        : $   *   $   *   $   *
//  Description   : Prints a pattern of $ and * characters
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : 5
//  Output        : *   *  *  *   *   #  #   #    #   #
//  Description   : Write a program which accept number from user and display below pattern
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
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
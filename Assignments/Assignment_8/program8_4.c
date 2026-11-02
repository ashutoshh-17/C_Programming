#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Table
//  Input         : 2
//  Output        : 2 4 6 8 10 12 14 16 18 20
//  Description   : Write a program which accept number from user and display its table
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Table(int iNo)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t", i * iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}
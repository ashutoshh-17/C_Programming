#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Input         : 2
//  Output        : 20 18 16 14 12 10 8 6 4 2
//  Description   : Write a program which accept number from user and display its table in reverse order
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void TableRev(int iNo)
{
    for(int i = 10; i >= 1; i--)
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
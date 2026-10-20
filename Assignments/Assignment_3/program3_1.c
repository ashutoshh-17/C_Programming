#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Input         : Integer
//  Output        : None
//  Description   : Prints even numbers up to a given limit
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d  ", iCnt * 2);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
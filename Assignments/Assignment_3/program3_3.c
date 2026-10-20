#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Input         : Integer
//  Output        : None
//  Description   : Prints even factors of a given number
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
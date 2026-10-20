#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Input         : Integer
//  Output        : BOOL
//  Description   : Checks if a number is even
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}
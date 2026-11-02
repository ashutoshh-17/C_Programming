#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : 9
//  Output        : Nine
//  Description   : Accept single digit number from user and print it into word.
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display(int iNo)
{
    char words[10][10] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo >= 0 && iNo <= 9)
    {
        printf("%s", words[iNo]);
    }
    else
    {
        printf("Invalid Number");
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
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Input         : 4
//  Output        : 4   8   12   16   20
//  Description   : Write a program which accept number from user and if number is less than 50
//  then print small , if it is greater than 50 and less than 100 then print medium, if it is
//  greater than 100 then print large.
//  Date          : 2/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
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
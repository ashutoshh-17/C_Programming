#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Input         : Character
//  Output        : None
//  Description   : Converts uppercase to lowercase 
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
// Propram to print 5 to 1 numbers on screen

#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : None
//  Output        : None
//  Description   : Prints numbers from 5 to 1
//  Date          : 20/10/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;

    while(i > 0)
    {
        printf("%d", i);
        i++;
    }
}

int main()
{
    Display();

    return 0;
}
#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : main
//  Input         : Ashutosh Waghire
//  Output        : Ashutosh Waghire
//  Description   : Write a program which accept name from user and print that name.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////


int main()
{
    char Name[30];

    printf("Enter your name: ");
    scanf("%[^\n]s", Name);

    printf("Your name is: %s\n", Name);
    
    return 0;
}
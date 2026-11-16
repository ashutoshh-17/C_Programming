#include <stdio.h>

////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Input         : 1000  745
//  Output        : 74.5
//  Description   : Write a program which accept total marks & obtained marks from user and calculate percentage.
//  Date          : 17/11/2026
//  Author        : Ashutosh Sumurti Waghire
//
////////////////////////////////////////////////////

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    if (iTotalMarks == 0)
    {
        return 0.0;
    }

    return ((float)iObtainedMarks / iTotalMarks) * 100;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Enter total marks: ");
    scanf("%d", &iValue1);

    printf("Enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}
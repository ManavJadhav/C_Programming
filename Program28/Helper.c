/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplay
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to accept range from user and display all numbers in between that range
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as iStart
        Accept second number as iEnd
        Display the Range from iStart to iEnd
    STOP
*/

#include "Header.h"

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0 ;

    if( iStart > iEnd)
    {
        printf("Invalid Range");
        return ;
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplayEven
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to accept range from user and display all Even numbers in between that range
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as iStart
        Accept second number as iEnd
        Check if there are Even number
        Display all Even Number from iStart to iEnd
    STOP
*/

#include "Header.h"

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0 ;

    if( iStart > iEnd)
    {
        printf("Invalid Range");
        return ;
    }

    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2) ==0)
        {
            printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
}
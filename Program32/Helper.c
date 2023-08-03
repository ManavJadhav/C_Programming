///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeDisplay
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to accept range from user and display all numbers in between that range in revesre order
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as iStart
        Accept second number as iEnd
        Display the Range from iStart to iEnd in Reverse order
    STOP
*/

#include "Header.h"

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0 , iSum = 0 ;

    if( iStart > iEnd) 
    {
        printf("Invalid Range\n");
        return ;
    }


    for(iCnt = iEnd ; iCnt >=iStart ; iCnt--)
    {
        printf("%d\t",iCnt);      
    }
    printf("\n");
}
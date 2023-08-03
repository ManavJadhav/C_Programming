/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeSum
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to accept range from user and return addition of all numbers in between that range
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as iStart
        Accept second number as iEnd
        Display Additon of all numbers from iStart to iEnd
    STOP
*/

#include "Header.h"

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0 , iSum = 0 ;

    if(( iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return -1 ;
    }


    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        iSum = iSum + iCnt;   
    }
    return iSum;
}
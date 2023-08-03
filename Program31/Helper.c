////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     RangeSumEven
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to accept range from user and return addition of all even numbers in between that range
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as iStart
        Accept second number as iEnd
        Store the result in iRet
        Return Additon of all Even numbers from iStart to iEnd
    STOP
*/

#include "Header.h"

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0 , iSum = 0 ;

    if(( iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return -1 ;
    }


    for(iCnt = iStart ; iCnt <= iEnd ; iCnt++)
    {
        if((iCnt % 2) ==0)
        {
            iSum = iSum + iCnt;
        }
           
    }
    return iSum;
}
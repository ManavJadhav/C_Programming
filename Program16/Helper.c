//////////////////////////////////////////////////////////////////////////
//
//  Function name :     SumNonFact
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to return summation of all its NON factors 
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Perform operation on NO
        Store the rseult in iRet
        Return the summation of non factors of Ret
    STOP
*/

#include "Header.h"

int SumNonFact(int iNo)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum ;
    
}
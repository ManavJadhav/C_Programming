/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     SumNonFact
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to return difference betweenn summation of all its factors 7 non factors
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Perform operation on NO
        Store the rseult in iRet
        Return the Difference between summation of factors & non factors 
    STOP
*/

#include "Header.h"

int FactDiff(int iNo)
{
    int iCnt = 0 , iSum = 0 , iFact = 0, iNonFac = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if(((iNo % iCnt)==0) && (iNo != iCnt))
        {
            iFact = iFact + iCnt;
        }
        else if((iNo % iCnt)!=0)
        {
            iNonFac = iNonFac + iCnt;
        }
    }
   iSum = iFact - iNonFac;
   return iSum;
    
}
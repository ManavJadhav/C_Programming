//////////////////////////////////////////////////////////////////////////
//
//  Function name :     MultFact
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Display multiplication of factors
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Perform Multiplication on factors of No
        Store the result in RET
        Return the value of RET
    STOP
*/

#include "Header.h"

int MultFact(int iNo)
{
    int iCnt = 0 , iMult = 1;

    for(iCnt =1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
    
}
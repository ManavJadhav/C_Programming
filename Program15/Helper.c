//////////////////////////////////////////////////////////////////////////
//
//  Function name :     NonFact
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Display its NON factors 
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Perform operation on NO
        Display the  Non factors of NO
    STOP
*/

#include "Header.h"

void NonFact(int iNo)
{
    int iCnt = 0 , iMul = 1;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
    
}
//////////////////////////////////////////////////////////////////////////
//
//  Function name :     FactRev
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Display its factors in reverse order
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO
        Perform operation on NO
        Display the factors of No in reverse order
    STOP
*/

#include "Header.h"

void FactRev(int iNo)
{
    int iCnt = 0 ;

    for(iCnt =iNo/2;iCnt >0;iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
    
}
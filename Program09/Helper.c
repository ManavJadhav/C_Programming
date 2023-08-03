//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Check
//  Input :             Integer
//  Output :            String
//  Description :       It used to check whether number is even or odd
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO
        Mod the NO with 2
        If remainder is 0 then it is Even
        If remainder is NON 0 then it is Odd

    STOP
*/

#include "Header.h"

int Check(int iNo)
{
    if((iNo % 2)==0)
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }

  
}

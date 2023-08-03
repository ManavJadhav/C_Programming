//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Check
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to Check if a number is Divisible by 5
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number in NO1
        Check if it is Divisible by 5
        Return the value of RET
    STOP
*/

#include "Header.h"

int Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return TRUE;                // Return the value to the caller
    }
    else
    {
        return FALSE;              // Return the value to the caller
    }
}
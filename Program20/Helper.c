//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountTwo
//  Input :             Integer
//  Output :            Intger
//  Description :       It used to accept number from user and count frequency of 2 in it .
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Check if the Digit contains 2
        Divide by 10 to Remove last digit
        Return the Frequency of 2 of iRet
    STOP
*/

#include "Header.h"

int CountTwo(int iNo)
{
    int iDigit = 0 , iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    } 
    return iCnt;
    
}

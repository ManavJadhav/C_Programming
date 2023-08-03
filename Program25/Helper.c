/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountRange
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to accept number from user and retuen frequency of digits in between 3 & 7 
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Check if the Digit is between 3 and 7
        Divide by 10 to Remove last digit
        Return the Frequency of digit between 3 and 7 
    STOP
*/

#include "Header.h"

int CountRange(int iNo)
{
    int iDigit = 0 , iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    } 
    return iCnt;
    
}
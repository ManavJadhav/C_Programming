/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     MultDigits
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to accept number from user and retuen multiplication of all digits. 
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept the number as NO
        Mod by 10 to get Digits
        Divide by 10 to Remove last digit
        Return the multiplication of all of digits 
    STOP
*/

#include "Header.h"

int MultDigits(int iNo)
{
    int iDigit = 0 , iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit !=0)
        {
            iMult = iMult * iDigit;
        }
        
        iNo = iNo / 10;
    } 
    return iMult;
    
}
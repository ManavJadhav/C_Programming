/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     CountDiff
//  Input :             Integer
//  Output :            Integer
//  Description :       It used to accept number from user and retuen frequency of even digits & odd digits 
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
        Return the Frequency of of even digits & odd digits of iRet
    STOP
*/

int CountDiff(int iNo)
{
    int iDigit = 0 , iSumEve = 0 , iSumOdd = 0 ,iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iSumEve = iSumEve + iDigit ;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit ;
        }
        
        iNo = iNo / 10;
    } 
    iDiff = iSumEve - iSumOdd;

    return iDiff;
    
}
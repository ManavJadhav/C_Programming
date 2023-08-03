//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Divide
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It used to Divide 2 numbers
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept first number as NO1
        Accept second number as NO2
        Perform Divide of NO1  & NO2
        Store the result in RET
        Return the value of RET
    STOP
*/

#include "Header.h"

int Divide(int iNo1 , int iNo2)
{
  int iAns = 0;                 // Local variable to store result

  if(iNo2 > iNo1)
  {
    return -1;
  }

  iAns = iNo1 / iNo2;

  return iAns;                  // Return the value to the caller

}
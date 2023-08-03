//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Display
//  Input :             NULL
//  Output :            Integers
//  Description :       It used to Display numbers from 5 to 1
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept how many times you want to iterate the Loop 
        Use For Loop for displaying the output
    STOP
*/

#include "Header.h"

void Display()
{
  int iCnt =0;                     // Local variable to Count
  
  for(iCnt=5;iCnt>0;iCnt--)
  {
    printf("%d\n",iCnt);
  }
}
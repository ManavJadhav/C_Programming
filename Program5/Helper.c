//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Display
//  Input :             Integer
//  Output :            Pattern
//  Description :       It used to Display Pattern
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO1
        Display that number of * on Screen
    STOP
*/

#include "Header.h"

void Display(int iNo)
{
  int i =0;
  
  for(i=1;i<=iNo;i++)
  {
    printf("*\n");
  }
}
//////////////////////////////////////////////////////////////////////////
//
//  Function name :     Display
//  Input :             Integer
//  Output :            Pattern
//  Description :       It used to Dispaly a Pattern
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
//////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept a number as NO1
        Display the Pattern using While Loop
    STOP
*/

#include "Header.h"

void Display(int iNo)
{ 
  while(iNo > 0)
  {
    printf("*\n");
    iNo--;
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             Row = 4 & col= 4
//  Output :            *   *   *   *	
//                      *   *   *   #
//                      *   *   #   #	
//                      *   #   #   #	
//  Description :       It used to accept Rows & Column from user and display the pattern
//  Author :            Manav Mahadev Jadhav
//  Date :              19/07/2023
//
/////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Algorithm
    START
        Accept number of Row as  iRow
        Accept number of Column as as iCol
        Display the Pattern
    STOP
*/

#include "Header.h"

void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0;

    for(i = iRow ; i > 0 ; i--)
    {
        for(j = 1 ; j<= iCol;j++)
        {
            if(i<j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }  
}
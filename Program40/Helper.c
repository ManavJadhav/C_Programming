/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name :     Pattern
//  Input :             Row = 3 & col= 5
//  Output :            5    4   3   2   1	
//                      5    4   3   2   1	
//                      5    4   3   2   1	
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

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = iCol ; j > 0;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }  
}
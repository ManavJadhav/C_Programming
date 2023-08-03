/////////////////////////////////////////////////////////////////
//
//  Accept a numbers from user and check if it is divisible by 5.
//
//////////////////////////////////////////////////////////////////

#include "Header.h"               // User defined header file inclusion


// Entry point function
int main()
{
    int iValue = 0, iRet =0 ;                   // Local varibles

    printf("Enter the Number : \n");
    scanf("%d",&iValue);                        // Accepting the input

    iRet = Check(iValue);                       // Function call
    if(iRet==TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("NOT Divisible by 5\n");
    }


    return 0;                                  // Return sucess to OS
}
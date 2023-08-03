#include "Header.h"               // User defined header file inclusion

// Entry point function
int main()
{
  int iValue = 0;

  printf("How many times you want to print * on screen ?\n");
  scanf("%d",&iValue);

  Display(iValue);
    
  return 0;
}
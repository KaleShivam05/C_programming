/////////////////////////////////////////////////////////////////
//
//  File name :     program14XXXX.c
//  Descreption :   Display factorial of numbers
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          22/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display factorial of numbers    
    Stop
*/

#include<stdio.h>

#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long iFact = 1;
  
    if(iNo < 0)
    {
        return ERR_INVALID;
    }
      
    iCnt = 1;
    while( iCnt <= iNo )
    {
        iFact = iFact * iCnt;
        iCnt++;
    }

    return iFact;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;
    
    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is : %lu\n",iRet);
    }
    
    return 0;
}
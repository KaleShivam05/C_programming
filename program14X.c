/////////////////////////////////////////////////////////////////
//
//  File name :     program14X.c
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

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    } 

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is : %d\n",iRet);
    }
    
    return 0;
}
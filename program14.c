/////////////////////////////////////////////////////////////////
//
//  File name :     program14.c
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

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

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
    
    printf("Factorial is : %d\n",iRet);

    return 0;
}
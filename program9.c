///////////////////////////////////////////////////////
//
//  File name :     program9.c
//  Descreption :   Display summation of numbers
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display summation of numbers 
    Stop
*/

#include<stdio.h>

// Iteration 

int Calculate(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }        
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = Calculate(iValue);
    printf("Sumation is %d\n",iRet);
    
    return 0;
}
/////////////////////////////////////////////////////////////////
//
//  File name :     program18.c
//  Descreption :   Display Summation of all factors 
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          25/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display Summation of all factors    
    Stop
*/

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {   iNo = -iNo; }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Addition of factors : %d\n",iRet);

    return 0;
}
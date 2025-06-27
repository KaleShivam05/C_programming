/////////////////////////////////////////////////////////////////
//
//  File name :     program21.c
//  Descreption :   Display number is perfect or not
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          26/06/2025
//
//////////////////////////////////////////////////////////////////

/*
    Start
        Accept number from user
         Display number is perfect or not    
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 , iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}
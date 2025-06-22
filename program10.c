///////////////////////////////////////////////////////
//
//  File name :     program10.c
//  Descreption :   Use to check number is even or odd 
//  Input :         Integer
//  Output :        Integer, String
//  Author :        Shivam Rajendra Kale
//  Date :          21/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
          Check 
            if number is even than
             Display number is even
            if number is odd than
             Display number is odd  
    Stop
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0) //logic
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

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue); //function call
    if (bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else 
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}
///////////////////////////////////////////////////////
//
//  File name :     program10XX.c
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
    return ((iNo % 2) == 0); //is not good programming 
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is even or odd : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
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
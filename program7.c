///////////////////////////////////////////////////////
//
//  File name :     program7.c
//  Descreption :   Display 1 to from any number 
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display 1 to that number
    Stop
*/


#include<stdio.h>

// Iteration 
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }        
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
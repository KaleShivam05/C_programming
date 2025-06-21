///////////////////////////////////////////////////////
//
//  File name :     program5XX.c
//  Descreption :   Display Hello on screen
//  Input :         Integer
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display hello number of times
    Stop
*/

#include<stdio.h>

// Iteration 

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d : Hello\n",iCnt);
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
///////////////////////////////////////////////////////
//
//  File name :     program6.c
//  Descreption :   Display number on screen 5 times
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display that number on screen 5 times
    Stop
*/

#include<stdio.h>

// Iteration 
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iNo);
    }        
}

int main()  
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
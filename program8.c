///////////////////////////////////////////////////////
//
//  File name :     program8.c
//  Descreption :   Display number in reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

/*
    Start
        Accept number from user
            Display number in reverse order
    Stop
*/

#include<stdio.h>

// Iteration 
void Display(int iNo)
{
    int iCnt = 0;
 
    for(iCnt = iNo; iCnt >= 1; iCnt--)
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
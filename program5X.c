///////////////////////////////////////////////////////
//
//  File name :     program5X.c
//  Descreption :   Display 5 times hello on screen
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

// Iteration 

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Hello\n"); 
    }        
}

int main()
{
    Display();

    return 0;
}
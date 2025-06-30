/////////////////////////////////////////////////////////////////
//
//  File name :     program45.c
//  Descreption :   Display number form array
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          30/06/2025
// 
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
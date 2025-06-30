/////////////////////////////////////////////////////////////////
//
//  File name :     program47.c
//  Descreption :   Display number form array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          30/06/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Display all elements of array
    Stop        
*/


#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Elements from the array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
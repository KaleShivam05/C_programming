/////////////////////////////////////////////////////////////////
//
//  File name :     program51.c
//  Descreption :   Display number form array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          01/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Display all elements of array
    Stop        
*/


#include<stdio.h>

void Display(int ptr[], int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr,5); // Display(100,5);

    return 0;
}
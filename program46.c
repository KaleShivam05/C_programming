/////////////////////////////////////////////////////////////////
//
//  File name :     program46.c
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

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);
    
    printf("Elements from the array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}
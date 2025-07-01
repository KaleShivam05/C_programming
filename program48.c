/////////////////////////////////////////////////////////////////
//
//  File name :     program48.c
//  Descreption :   Display number form array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          01/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Display all elements of array
    Stop        
*/


#include<stdio.h>

void Display(int *ptr, int iSize)
{
    printf("Elements of the array are : \n");
    
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
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
/////////////////////////////////////////////////////////////////
//
//  File name :     program53.c
//  Descreption :   Allocate memory for array
//  Input :         Integer
//  Output :        Integer
//  Author :        Shivam Rajendra Kale
//  Date :          01/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Allocate memory for array
    Stop        
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    // Step 1 : Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    // Step 2 : Use that memory
    // Use

    // Step 3 : Free the memory 
    free(ptr);

    return 0;
}
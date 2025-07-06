/////////////////////////////////////////////////////////////////
//
//  File name :     program113.c
//  Descreption :   Input charecter
//  Input :         String , charecter
//  Output :        String
//  Author :        Shivam Rajendra Kale
//  Date :          06/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Find Charecter from string
    Stop        
*/

#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    // Problem solved
    printf("Enter the character : \n");
    scanf(" %c",&cValue);   // space before %c

    return 0;
}
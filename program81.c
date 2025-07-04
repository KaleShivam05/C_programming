/////////////////////////////////////////////////////////////////
//
//  File name :     program81.c
//  Descreption :   Display string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          04/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Display string
    Stop        
*/

#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);
    
    return 0;
}
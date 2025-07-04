/////////////////////////////////////////////////////////////////
//
//  File name :     program82.c
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

void Display(char *str)
{
    printf("Your name is : %s\n",str);
}

int main()
{
    char Arr[50];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}
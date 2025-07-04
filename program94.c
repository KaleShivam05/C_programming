/////////////////////////////////////////////////////////////////
//
//  File name :     program94.c
//  Descreption :   Display charecter form string
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          04/07/2025
// 
//////////////////////////////////////////////////////////////////

/*
    Start 
        Accept Input from user
            Display charecter form string
    Stop        
*/

#include<stdio.h>

void Display(char str[])
{
    int i = 0;

    for(i = 0 ; str[i] != '\0'; i++)
    {
        printf("%c\n",str[i]);
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}
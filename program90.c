/////////////////////////////////////////////////////////////////
//
//  File name :     program90.c
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
    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;
    
    printf("%c\n",*str);
    str++;
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}
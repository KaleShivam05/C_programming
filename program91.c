/////////////////////////////////////////////////////////////////
//
//  File name :     program91.c
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
    printf("%c\n",str[0]);
    
    printf("%c\n",str[1]);
    
    printf("%c\n",str[2]);
    
    printf("%c\n",str[3]);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}
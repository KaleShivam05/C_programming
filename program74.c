/////////////////////////////////////////////////////////////////
//
//  File name :     program74.c
//  Descreption :   Display ASCII value
//  Input :         Charecter
//  Output :        Charecter
//  Author :        Shivam Rajendra Kale
//  Date :          03/07/2025
// 
//////////////////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter character : \n");
    scanf("%c",&ch);

    printf("ASCII value of %c is %d\n",ch,ch);

    return 0;
}
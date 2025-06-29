/////////////////////////////////////////////////////////////////
//
//  File name :     program37.c
//  Descreption :   Display number
//  Author :        Shivam Rajendra Kale
//  Date :          29/06/2025
//
//////////////////////////////////////////////////////////////////

//Iteration

#include<stdio.h>

void Display()
{
    int j = 0;

    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
    for(j = 1; j <= 3; j++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{

    Display();

    return 0;
}
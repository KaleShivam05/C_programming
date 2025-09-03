/////////////////////////////////////////////////////////////////
//
//  File name :     program132.c
//  Descreption :   create new file
//  Author :        Shivam Rajendra Kale
//  Date :          08/07/2025
// 
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{  
    int fd = 0;

    fd = creat("Demo.txt",0777);

    return 0;
}

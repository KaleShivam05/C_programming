/////////////////////////////////////////////////////////////////
//
//  File name :     program133.c
//  Descreption :   create new file
//  Input :         String (file name)
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
    char Fname[20] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777); 

    return 0;
}

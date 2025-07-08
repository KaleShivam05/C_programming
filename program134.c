/////////////////////////////////////////////////////////////////
//
//  File name :     program134.c
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
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }

    printf("File is succesfully created with FD %d\n",fd);

    return 0;
}
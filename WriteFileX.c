#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0; 
    char Fname[50];
    char Buffer[]= "Hello world";

    printf("Enter file name :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("unable to poen file \n");
        return -1;
    }

    int ret = write(fd,Buffer,8);

    printf("%d bytes rets written succesfully :\n",ret);

    close(fd);

    return 0;
}
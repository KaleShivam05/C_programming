#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0; 
    char Fname[50];
    char Buffer[50] = {'\0'};

    printf("Enter file name :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("unable to poen file \n");
        return -1;
    }

    int ret = read(fd,Buffer,5);

    printf("%d bytes rets read succesfully :\n",ret);

    printf("Data from file is : %s\n",Buffer);

    close(fd);

    return 0;
}
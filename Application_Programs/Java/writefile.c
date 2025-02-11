#include<stdio.h>
#include<fcntl.h> // file control
#include<unistd.h> // unilversal standards
#include<string.h>

int main()
{
    int fd =0;

    char Arr[] = "Fabulous Infosystems";

    int Ret = 0;
    fd = open("jsm.txt", O_RDWR); // O_RDWR == 2
    Ret = write(fd,Arr,strlen(Arr));// ( kontya file madhye, kay lihaycha ahe, kiti lihaycha ahe in bytes)
    
    printf("%d bytes successfully writtn in the file \n");

    close (fd);

    return 0;
}
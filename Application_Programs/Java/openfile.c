#include<stdio.h>
#include<fcntl.h> // file control
#include<unistd.h> // unilversal standards

int main()
{
    int fd = 0;

    fd = open("jsm.txt", O_RDWR);

    if(fd!=-1)
    {
        printf("file successfully OPENED with fd :: %d\n", fd);
    }

    close(fd);

    return 0;
}
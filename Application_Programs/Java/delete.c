#include <stdio.h>
#include <fcntl.h>   // for file control options
#include <unistd.h>  // for universal standards
#include <string.h>  // for string manipulation functions

int main()
{
    int fd = unlink("jsm.txt");
    printf("File successfully deleted %d", fd);
    return 0;
}
#include <stdio.h>
#include <fcntl.h>   // for file control options
#include <unistd.h>  // for universal standards
#include <string.h>  // for string manipulation functions

int main() {
    int fd = 0;
    char Arr[] = "\n Welcome to PPA activity program";
    int Ret = 0;

    fd = open("jsm.txt", O_RDWR | O_APPEND);  // O_RDWR (read/write) and O_APPEND (append to the end of the file)
    if (fd == -1) {
        printf("Unable to open the file.\n");
        return -1;
    }

    Ret = write(fd, Arr, strlen(Arr));  // Write the content of Arr to the file
    if (Ret == -1) {
        printf("Error writing to the file.\n");
        close(fd);
        return -1;
    }

    printf("%d bytes successfully written to the file.\n", Ret);

    close(fd);
    return 0;
}

#include <stdio.h>
#include <fcntl.h>   // for file control options
#include <unistd.h>  // for universal standards
#include <string.h>  // for string manipulation functions

int main() {
    int fd = 0;
    char Arr[21];  // Extra space for null character to treat it as a string
    int Ret = 0;

    fd = open("jsm.txt", O_RDWR);
    if (fd == -1) {
        printf("Unable to open the file.\n");
        return -1;
    }

    Ret = read(fd, Arr, 20);
    if (Ret == -1) {
        printf("Error reading the file.\n");
        close(fd);
        return -1;
    }

    Arr[Ret] = '\0';  // Null terminate the string

    printf("%d bytes successfully read from the file.\n", Ret);
    printf("Data read from the file is: \n%s", Arr);

    close(fd);
    return 0;
}

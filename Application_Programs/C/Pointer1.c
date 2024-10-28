#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 10 ;
    float f = 30.4f;
    double d = 90.12345;

    // for CHAR
    
    char *chpointer = &ch;

    printf("Address of ch = %u \n", &ch);
    printf("chpointer holds the address of ch and address is %u  \n", &chpointer);
    printf("chpointer fetch the value from address which is stored in it = %c \n", *chpointer);


    // for INT
    int *iPointer = &i;

     // for FLOAT  
    float *fPointer = &f;

    // for DOUBLE  
    double *dPointer = &d;

    printf("the size of the pointer is = %d \n", sizeof(*iPointer));
    return 0;
}
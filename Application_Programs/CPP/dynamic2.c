#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5] ; // SATIC MEMORY ALLOCATION --> 20
    float fvalue; // SATIC MEMORY ALLOCATION --> 4
    double Brr[4] ; // SATIC MEMORY ALLOCATION --> 32

    int isize = 0;
    int *ptr = NULL;

    printf("Enter the size of an Array:- \n");
    scanf("%d", &isize);

    ptr = (int *)calloc(isize, sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    printf("ptr->[1] %d:", ptr[1]);
    
    free(ptr);
    

    return 0;
}
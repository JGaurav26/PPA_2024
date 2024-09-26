#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;

    printf("ptr = %u \n", ptr); // 2292
    ptr++;
    printf("ptr++ = %u \n", ptr); // 2296
    ptr--;
    printf("ptr-- = %u \n", ptr); // 2292


    char ch = 'A';
    char *chptr = &ch;
    printf("chptr = %u \n", chptr); // 2291
    chptr++;
    printf("chptr++ = %u \n", chptr); // 2292
    chptr--;
    printf("chptr-- = %u \n", chptr); // 2291

    return 0;




}
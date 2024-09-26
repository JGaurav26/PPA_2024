#include<stdio.h>

int main()
{
    int i = 10;
    int *ip = &i;

    printf("value of i %d \n", i); // 10
    printf("value pointed by ip %d \n", ip); // 10
    printf("address of i %u \n", &i); // 100
    printf("address of ip %u \n", &ip); // 200
    printf("address hold by ip %u \n", ip); // 100
    printf("size of i %d \n", sizeof(i)); // 4
    printf("size of ip %d \n", sizeof(ip)); // 8

    return 0;

}
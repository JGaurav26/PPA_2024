#include<stdio.h>

// Embedded Strucutre Nesting
struct outer
{
    int member1;

    struct inner
    {
        int mem1;
    };
    
};

// Separate Structure Nesting
struct inner1 
{
    int member1;
};

struct outer1
{
    int i;
    struct inner1 innerobj;
};

int main()
{
    struct outer1 outobj1 = { 10, 20};
    printf("outerobj1.i = %d \n", outobj1.i);
    printf("outerobj1.innerobj.member1 = %d \n", outobj1.innerobj.member1);

    return 0;
}
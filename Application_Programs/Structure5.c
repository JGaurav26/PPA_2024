#include<stdio.h>
struct Demo
{
    int i;
    float f;
};

typedef struct Demo2
{
    int i;
    float f;
}demo2obj1;

int main()
{
    struct Demo obj1 = {.i = 10, .f = 20.0f}; // initialization using ' designated list '
    struct Demo obj2 = obj1; // copy obj1 into obj2

    demo2obj1 newD2 = { 10, 10.5 }; // renaming obj1 with newD2 --> making alias of obj1


    return 0;
}
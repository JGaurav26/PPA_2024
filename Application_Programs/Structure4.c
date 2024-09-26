#include<stdio.h>
struct Demo
{
    int *p;
    float *q;
    double d;
};

int main()
{
    struct Demo obj1;
    
    int i = 10;
    float f = 90.90f;

    obj1.p = &i;
    obj1.q = &f;
    obj1.d = 90.9999;

    printf("%d \n", *(obj1.p));
    printf("%f \n", *(obj1.q));
    printf("%f \n", obj1.d);

    return 0;
}
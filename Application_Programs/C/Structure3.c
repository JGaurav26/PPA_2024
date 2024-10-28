#include<stdio.h>
struct Demo
{
    int i;
    float f;
};

int main()
{
    struct Demo Arr[3];
    Arr[0].i = 10;
    Arr[0].f = 10.5f;

    Arr[1].i = 20;
    Arr[1].f = 20.5f;

    Arr[2].i = 30;
    Arr[2].f = 30.5f;

   // OR

/* struct Demo obj1;
    obj1.i = 10;
    obj1.f = 10.5f;

    struct Demo obj2;
    obj2.i= =20;
    obj2.f = 20.5f;
    
    struct Demo obj3;
    obj3.i= =30;
    obj3.f = 30.5f;

    Arr[0] = obj1;
    Arr[1] = obj2;
    Arr[2] = obj3; */
    

    return 0;
}
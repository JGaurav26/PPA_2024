#include<stdio.h>
struct Demo
{
    int no;
    int Arr[3];
    float f;
};

int main()
{
    struct Demo obj;
    obj.no = 20;

    obj.Arr[0] = 20;
    obj.Arr[1] = 30;
    obj.Arr[2] = 40;

    obj.f = 50.5f;

    printf("sizeof(obj) structure is = %d \n", sizeof(obj));

    return 0;

}
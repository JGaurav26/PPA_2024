#include<stdio.h>
struct Demo
{
    int no;
    // float no; --> NOT ALLOWED, compiler will generate Ambiguity Error
    // int no = 10; --> not allowed to initialise the value as the memory is not allowed at declaration
    float f;
    int x;
    float d;

}strobj,strobj2;// object creation at the time of declaration, 'memory allocated'

int main()
{
    struct Demo obj1;
    obj1.no = 10;
    obj1.f = 10.5f;
    obj1.x = 20;
    obj1.d = 20.5;

    printf("sizeof(obj1) structure is = %d \n", sizeof(obj1));

    struct Demo obj2;
    obj2.no = 20;
    obj2.f = 20.5f;
    obj2.x = 30;
    obj2.d = 30.5;

    printf("sizeof(obj2) structure is = %d \n", sizeof(obj2));

    struct Demo strobj;
    strobj.no = 20;
    strobj.f = 20.5f;
    strobj.x = 30;
    strobj.d = 30.5;

    printf("sizeof(strobj) structure is = %d \n", sizeof(strobj));


    struct Demo strobj3 = {2, 60.5f, 700, 700.5f}; // initialise with member initialisation list
return 0;
}

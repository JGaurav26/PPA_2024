#include<stdio.h>
int main()
{
    int x=10;
    const int Y = 10; // read only

    x++; // 11  allowed
    x--; // 10  allowed
    x = 20; // 20  allowed

   // Y++; // not allowed
   // Y--; // not allowed
   // Y = 20; // not allowed

    return 0;

}
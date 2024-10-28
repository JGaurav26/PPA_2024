#include<stdio.h>

int main()
{
    int Arr[5] = { 10,20,30,40,50};
    int* p = Arr;
    int *q = &(Arr[4]);
    return 0;
}
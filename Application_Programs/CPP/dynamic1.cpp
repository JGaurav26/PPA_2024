#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; // STATIC MEMORY ALLOCATION

    int *ptr1 = (int *)malloc(5*sizeof(int)); // DYNAMIC MEMORY ALLCOCATION IN C
    free(ptr1);

    int *ptr2 = new int[5]; // DYNAMIC MEMORY ALLCOCATION IN C++
    delete []ptr2;
}
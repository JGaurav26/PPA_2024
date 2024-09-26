#include<stdio.h>

int main()
{
    //1
    int Arr[5] = {10, 20, 30, 40, 50}; // declaration and initialization

    //2
    int Brr[] = {10, 20, 30}; // declare w/o length, initialization

    //3
    int Crr[7] = {10, 20, 30, 40, 50}; // declaration, initialization with less members(ie data elements)

    //4 // Member by Member initialization
    int Drr[3]; // Member by Member initialization
    Drr[0] = 10; // Member by Member initialization
    Drr[1] = 20; // Member by Member initialization
    Drr[2] = 30; // Member by Member initialization

    const int Err[4] = {1, 2, 3, 4};

    // Err[0] = 50; --> Not Allowed
   //  Err[1]++; --> Not Allowed

   // int NoArrar[] = {}; --> Not Allowed

    return 0;
}

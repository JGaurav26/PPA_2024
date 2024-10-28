#include<stdio.h>
int main()
{

    int Arr[5] = { 10,20,30,40,50};
    int *ptr = Arr;
    int *ptr2 = &(Arr[4]);

    int Ans = 0;

    // Addition of PTR + no

    printf("ptr before addition = %u \n", ptr); // 6422272
    ptr  = ptr + 2; // ptr + 2 = [ sizeof(int)] ie 6422272 + 2(4) = 64222280
    printf("ptr after addition = %u \n", ptr); // 6422280

    // Addition of PTR + PTR : NOt Allowed

    // Subtraction of No from PTR (PTR - no)

    printf("ptr before subtraction = %u \n", ptr); // 6422280
    ptr  = ptr - 1; // ptr - 1 = [ sizeof(int)] ie 6422280 - 1(4) = 64222276
    printf("ptr after subtraction = %u \n", ptr); // 6422276

    // Subtraction of two Pointers

    printf("ptr before subtraction = %u \n", ptr); // 6422276
    printf("ptr2 before subtraction = %u \n", ptr2); // 6422288
    Ans  = ptr2 - ptr;
    printf("ptr2 - ptr subtraction = %d \n", Ans); // 3

    return 0;
}
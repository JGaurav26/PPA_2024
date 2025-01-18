#include<stdio.h>

void Fun_Value(int no)
{
    no++;
    printf("value of no inside method : %d \n", no);
}

void Fun_Address(int *ptr)
{
    (*ptr)++;
    printf("value of *ptr inside method : %d \n", *ptr);
}

void Fun_Reference(int &ref)
{
    ref++;
    printf("value of ref inside method : %d \n", ref);
}

int main()
{
    int i = 10, j = 10, k = 10;

    printf("<----- CALL BY VALUE -----> \n");
    printf("value of i before : %d \n", i);
    Fun_Value(i);
    printf("value of i after : %d \n", i);
    printf("\n");

    printf("<----- CALL BY ADDRESS ----->\n");
    printf("value of j before : %d \n", j);
    Fun_Address(&j);
    printf("value of j after : %d \n", j);
    printf("\n");

    printf("<----- CALL BY REFERENCE ----->\n");
    printf("value of j before : %d \n", k);
    Fun_Reference(k);
    printf("value of j after : %d \n", k);
    printf("\n");

    return 0;
}
#include<stdio.h>

int Subtraction(int no1, int no2) //shop
{
    int sub = 0;
    sub = no1 - no2;
    return sub;
}

int main() //home
{
    int value1 = 10;
    int value2 = 7;
    int ans = 0;

    ans = Subtraction(value1,value2);
    printf("Subtraction is = %d", ans);
    return 0;
}
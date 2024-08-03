#include<stdio.h>

int Addition(int no1, int no2) //shop
{
    int sum = 0;
    sum = no1 + no2;
    return sum;
}

int main() //home
{
    int value1 = 10;
    int value2 = 11;
    int ans = 0;

    ans = Addition(value1,value2);
    printf("Addition is = %d", ans);
    return 0;
}
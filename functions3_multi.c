#include<stdio.h>

int Multiplication(int no1, int no2) //shop
{
    int product = 0;
    product = no1 * no2;
    return product;
}

int main() //home
{
    int value1 = 10;
    int value2 = 11;
    int ans = 0;

    ans = Multiplication(value1,value2);
    printf("Multiplication is = %d", ans);
    return 0;
}
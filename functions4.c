#include<stdio.h>

int Addition(int no1, int no2) //shop
{
    int sum = 0;
    sum = no1 + no2;
    return sum;
}

int Subtraction(int no1, int no2) //shop
{
    int sub = 0;
    sub = no1 - no2;
    return sub;
}

int Multiplication(int no1, int no2) //shop
{
    int multi = 0;
    multi = no1 * no2;
    return multi;
}

int Division(int no1, int no2) //shop
{
    int div = 0;
    div = no1 / no2;
    return div;
}

int main() //home
{
    int value1 = 10;
    int value2 = 5;
    int ans = 0;

    ans = Addition(value1,value2);
    printf("Addition is = %d \n", ans);

     ans = Subtraction(value1,value2);
    printf("Subtraction is = %d \n", ans);

     ans = Multiplication(value1,value2);
    printf("Multiplication is = %d \n", ans);

     ans = Division(value1,value2);
    printf("Division is = %d \n", ans);
    return 0;
}
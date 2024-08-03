#include<stdio.h>

int Division(int no1, int no2) //shop
{
    int div = 0;
    div = no1 / no2;
    return div;
}

int main() //home
{
    int value1 = 100;
    int value2 = 10;
    int ans = 0;

    ans = Division(value1,value2);
    printf("Division is = %d", ans);
    return 0;
}
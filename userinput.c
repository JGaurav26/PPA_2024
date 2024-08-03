#include<stdio.h>

int Addition(int no1, int no2) //shop
{
    int sum = 0;
    sum = no1 + no2;
    return sum;
}

int main() //home
{
    int value1, value2 = 0;
    int result = 0;
    
    printf("Enter first number:- \n");
    scanf("%d", &value1);

    printf("Enter second number:- \n");
    scanf("%d", &value2);

    result = Addition(value1, value2);
    printf("Addition is %d", result);

    return 0;

}


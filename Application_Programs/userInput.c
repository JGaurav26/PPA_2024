#include<stdio.h>
int Addition(int No1, int No2) //shop
{
int Sum = 0;
Sum = No1 + No2;
return Sum;
}

int main()
{
int Value1, Value2 = 0;
int Result = 0;

printf("Enter first number: \n");
scanf("%d", &Value1);

printf("Enter second number: \n");
scanf("%d", &Value2);

Result = Addition(Value1, Value2);
printf("Addition is: %d", Result);

return 0;
}
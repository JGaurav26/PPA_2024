#include<stdio.h>

int Addition(int No1, int No2) //shop
{
int Sum = 0;
Sum = No1 + No2;
return Sum;
}

int Substraction(int No1, int No2) //shop
{
int Sub = 0;
Sub = No1 - No2;
return Sub;
}

int Multiplication(int No1, int No2) //shop
{
int Mul = 0;
Mul = No1 * No2;
return Mul;
}

int Division(int No1, int No2) //shop
{
int Div = 0;
Div = No1 / No2;
return Div;
}

int main() // home
{
int Value1 = 10;
int Value2 = 11;
int Ans = 0;
Ans = Addition(Value1,Value2);
printf("Addition is = %d \n",Ans);

Ans = Substraction(Value1,Value2);
printf("Substraction is = %d \n",Ans);

Ans = Multiplication(Value1,Value2);
printf("Multiplication is = %d \n",Ans);

Ans = Division(Value1,Value2);
printf("Division is = %d \n",Ans);

return 0;
}
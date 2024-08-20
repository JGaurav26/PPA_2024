#include<stdio.h>
int Data = 50; // Global variable
int main()
{
    char cValue ='A';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 78.999;

    printf("%c \n",cValue);
    printf("%d \n",iValue);
    printf("%f \n",fValue);
    printf("%f \n",dValue);
    printf("%d \n",Data);

    return 0;

}
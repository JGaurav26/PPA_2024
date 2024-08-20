#include<stdio.h>
int main()
{
    int a =10;
    int b =10;
    int c =10;
    int d =10;

    // below are naked statement
    a++; //just increment not pre or post increment
    ++b; //just increment not pre or post increment
    c--; //just decrement not pre or post decrement
    --d; //just decrement not pre or post decrement

    printf("%d \n",a); //11
    printf("%d \n",b); //11
    printf("%d \n",c); //9
    printf("%d \n",d); //9
    return 0;
}
#include<stdio.h>
void Fun()
{
    auto int i = 10;
    i++;
    printf("value of i is :- %d \n",i);
}
    int main()
    {
        Fun();
        Fun();
        Fun();

        return 0;
    }

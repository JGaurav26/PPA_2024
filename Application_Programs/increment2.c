#include<stdio.h>
int main()
{
    int i=10;
    int No = 0;
    No=++i;  // preincrement --> first increment then assign--> i++ compiler convert to i = i+1;
    printf("No = %d \n",No); //11
    printf("i = %d \n",i); //11
return 0;
}
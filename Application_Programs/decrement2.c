#include<stdio.h>
int main()
{
    int i=10;
    int No = 0;
    No=i--;  // postdecrement --> first assign then decrement--> i++ compiler convert to i = i+1;
    printf("No = %d \n",No); //10
    printf("i = %d \n",i); //9
return 0;
}
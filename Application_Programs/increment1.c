#include<stdio.h>
int main()
{
    int i=10;
    int No = 0;
    No=i++;  // postincrement --> first assign then increment--> i++ compiler convert to i = i+1;
    printf("No = %d \n",No);
    printf("i = %d \n",i);
return 0;
}
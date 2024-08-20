#include<stdio.h>
int main()
{
    int No = 0;
    int remainder = 0;

    printf("Enter number : \n");
    scanf("%d",&No);
    
    remainder = No%2;

    if(remainder==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("number is odd");
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int i =0; // loop counter
    int count = 0; // userinput
    printf("Enter the number of times you want to display JAY GANESH on screen \n");
    scanf("%d",&count);

    for (i=1; i<=count; i++)
    {
        printf("%d. jay ganesha... \n",i);
    }
    return 0;
}
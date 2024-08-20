#include<stdio.h>
int main()
{
        int i =1; // loop counter variable
        int count = 0; // user input

        printf("Enter the number, how many times you wanrt to print jay ganesha on screen \n");
        scanf("%d",&count);

        while(i<=count)
        {
            printf("%d.jay ganesha... \n",i);
            i++;
        } 
return 0;
}
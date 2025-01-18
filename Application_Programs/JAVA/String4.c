#include<stdio.h>

int calculateLength(char *str)
{
    int iCnt = 0;

    while(*str != '\0') 
    {
        iCnt++;
        str++; 
    }

    return iCnt; // Return the count of characters
}

int main()
{
    char name[100];
    int iRet = 0;

    printf("Enter your name: \n");
    scanf("%[^\n]s", name); 

    iRet = calculateLength(name);
    printf("Length of your name is: %d\n", iRet);

    return 0;
}

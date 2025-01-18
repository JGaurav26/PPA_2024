#include<stdio.h>
int main()
{
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0' };
    char str2[] = "Hello";

    printf("str1 : %s \n", str1);
    printf("str2 : %s", str2);

    return 0;
}
#include<stdio.h>
// by dafault 
int i;
int j = 11;
extern int no;
int main()
{
    printf("value of i :- %d \n",i); // 0
    printf("value of j :- %d \n",j);// 11
    printf("value of no :- %d \n",no);// 20 --> from Helper.c

    return 0;
}

// gcc Main.c Helper.c -o myexe
// OR
// gcc Helper.c Main.c -o myexe
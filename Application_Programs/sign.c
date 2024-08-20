#include<stdio.h>
int main()
{
    int i =10;
    signed int j =20; // +ve
    signed int k =-30; // -ve
    unsigned int a = 40; // only +ve

    printf("%d \n",i); //10
    printf("%d \n",j); //20
    printf("%d \n",k); //-30
    printf("%d \n",a); //40
    
    int x = 10;
    short int y = 10;
    long int z = 20;

    printf("%d \n",sizeof(x)); // 10rs 4bytes
    printf("%d \n",sizeof(y)); // 8rs 2bytes
    printf("%d \n",sizeof(z)); // 15rs 4bytes
    return 0;

}
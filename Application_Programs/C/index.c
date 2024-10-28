#include<stdio.h>
int main()
{
    float value = 3.14f;
    float *p = &value;
    float *q = p;
    float ans = *p + *q;


    printf("%d \n", *p);
    printf("%d \n", *q);
    printf("%d \n", ans);

    return 0;
}
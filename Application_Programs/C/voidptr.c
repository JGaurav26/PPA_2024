#include<stdio.h>
int main()
{
    char ch = 'A';
    int i = 10;
    float f = 10.5f;
    double d = 40.40;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c \n", *cp);//
    printf("%d \n", *ip);//
    printf("%f \n", *fp);//
    printf("%f \n", *dp);//

// Genric Pointer - sabka malik ek

void *vp = NULL;
vp = &ch;
printf("%c \n", *cp);//
printf("%c \n", *(char *)cp);// using TYPE-CASTING

vp = &i;
printf("%d \n", *ip);//
printf("%d \n", *(int *)ip);// using TYPE-CASTING

vp = &f;
printf("%f \n", *fp);//
printf("%f \n", *(float *)fp);// using TYPE-CASTING

vp = &d;
printf("%f \n", *dp);//
printf("%f \n", *(double *)dp);// using TYPE-CASTING

return 0;

}
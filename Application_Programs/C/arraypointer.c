#include<stdio.h>
int main()
{
    int Arr[5] = {10, 20, 30, 40,50};

    printf("%d \n", Arr); // 100 - 6422284
    printf("%d \n", &Arr); // 100 - 6422284

    printf("%d \n", Arr+1); // 104 - 6422288
    printf("%d \n", &Arr+1);//120 - 6422324

    printf("%d\n",Arr[3]);
    printf("%d\n",3[Arr]);

    printf("%d\n",*(Arr+3));
    
    return 0;
}
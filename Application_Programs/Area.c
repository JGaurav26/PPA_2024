#include<stdio.h>
int main()
{
    float Radius = 0.0f;
    const float PI = 3.14f; // constant hence value never changed
    float Area = 0.0f;

    printf("Enter the size of radius \n");
    scanf("%f",&Radius);

    Area = PI * Radius * Radius;
    printf("Area of Circle is: %f \n",Area);
    return 0;
}
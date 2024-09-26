#include<stdio.h>

int main()
{
    int Arr[4] = {10, 20, 30, 40};
    printf("Base Address of Arr : %d \n", Arr);

    printf("Base Address of Arr[0] : %d \n", &Arr[0]);

    printf("Base Address of Arr[1] : %d \n", &Arr[1]);

    printf("Base Address of Arr[2] : %d \n", &Arr[2]);

    printf("Base Address of Arr[3] : %d \n", &Arr[3]);
    
    printf("Size of whole Arr is  : %d \n", sizeof(Arr)); 
    printf("Size of an element in Arr is  : %d \n", sizeof(Arr[2]));

    printf("Element at index 3  : %d \n", Arr[3]); 

    int lengthOfArray = (sizeof(Arr) / sizeof(Arr[2])); 
    printf("Length of Array is : %d \n", lengthOfArray);   

    int Brr[2] = {1 , 2};
    printf("Element at index 2  : %d \n", Brr[2]);

    // int Crr[2] = {1 , 2, 3, 4, 5};
   // printf("Element at index 2  : %d \n", Brr[2])


    // Length of Array using Loops

    int i;
    int count = 0;

    for(i=0; Arr[i]!='\0'; i++)
    {
        count++;
    }

    printf{"Length using Loop : %d \n",count};

    return 0;
}
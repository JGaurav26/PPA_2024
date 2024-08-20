#include<stdio.h>

void display() //shop // function definition
{
    printf("inside display function...\n");
}

int main() //home 
{
   printf("inside main function...\n");
   display();  //function call
   return 0; 
}
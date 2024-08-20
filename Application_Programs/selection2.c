#include<stdio.h>
int main()
{
    int standard =0;
    printf("Enter your standad \n");
    scanf("%d", &standard);
//if-else-if ladder
if(standard==1)
{
    printf("your exam is at 1 PM \n");
}
else if(standard==2){
    printf("your exam is at 2 PM \n");
}
else if(standard==3){
    printf("your exam is at 3 PM \n");
}
else if(standard==4){
    printf("your exam is at 4 PM \n");
}
else{
    printf("Invalid/wrong standard");
}
    return 0;
}
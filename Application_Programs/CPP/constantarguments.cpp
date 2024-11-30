#include<iostream>
using namespace std;

void display(int i, const int j)
{
    int a = 1;
    const int b = 20;
    
    i++; // ALLOWED
    // j++; // NOT ALLOWED
    a++; // ALLOWED
    // b++; // NOT ALLOWED
}

int main()
{
    display(1,2);
    return 0;
}

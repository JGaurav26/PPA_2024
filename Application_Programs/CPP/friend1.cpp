#include<iostream>
using namespace std;

class Demo
{
    public : int i;

    private : int j;

    protected : int k;

public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
};

void display() // naked function, outside of the class
{
    Demo obj;
    cout<<"Value of i :: "<<obj.i<<endl; // Allowed
    cout<<"Value of j :: "<<obj.j<<endl; // NA
    cout<<"Value of k :: "<<obj.k<<endl; // NA
};

int main()
{
    display();
    return 0;
}
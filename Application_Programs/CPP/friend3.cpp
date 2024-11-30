#include<iostream>
using namespace std;

class Hello
{
    public: 
        void display(); // declaration
};

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

    friend void Hello :: display();
};

void Hello :: display() // definition
{
    Demo obj;
    cout<<"Value of i :: "<<obj.i<<endl; // Allowed
    cout<<"Value of j :: "<<obj.j<<endl; // Allowed bcz display() is now a friend of our class Demo
    cout<<"Value of k :: "<<obj.k<<endl; // Allowed
};


int main()
{
    Hello hobj;
    hobj.display();
    return 0;
}
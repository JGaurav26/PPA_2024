#include<iostream>
using namespace std;

class Hello
{
    public: 
        void fun(); // declaration
        void gun();
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

    friend class Hello;
};

void Hello :: gun() // definition
{
    Demo obj;
    cout<<"Value of i :: "<<obj.i<<endl; // Allowed
    cout<<"Value of j :: "<<obj.j<<endl; // Allowed bcz display() is now a friend of our class Demo
    cout<<"Value of k :: "<<obj.k<<endl; // Allowed
};

void Hello :: fun() // definition
{
    Demo obj;
    cout<<"Value of i :: "<<obj.i<<endl; // Allowed
    cout<<"Value of j :: "<<obj.j<<endl; // Allowed bcz display() is now a friend of our class Demo
    cout<<"Value of k :: "<<obj.k<<endl; // Allowed
};


int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}
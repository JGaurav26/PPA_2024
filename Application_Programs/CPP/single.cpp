#include<iostream>
using namespace std;

class Demo // PARENT CLASS
{
    public:
            int x,y;

    Demo()
        {
            cout<<"1. Inside Demo Constructor"<<endl;
            x = 10;
            y = 20;
        }

    ~Demo()
        {
            cout<<"1. Inside Demo Destructor"<<endl;
            x = 10;
            y = 20;
        }

    void fun()
    {
        cout<<"Inside fun of Demo Class"<<endl;
    }
};

// child class: Hello
// class Hello extends Demo -----> in JAVA

class Hello : public Demo
{
    public:
            int a,b,c;

    Hello()
    {
        cout<<"2. Inside the Hello Constructor"<<endl;
        a = 30;
        b = 40;
        c = 50;
    }

    ~Hello()
    {
        cout<<"2. Inside the Hello Destructor"<<endl;
    }

    void gun()
    {
        cout<<"Inside gun of Hello"<<endl;
    }
};

int main()
{
    Hello hobj;
    
    cout<<sizeof(hobj)<<"bytes"<<endl; // 20 bytes

    cout<<hobj.x<<endl;
    cout<<hobj.y<<endl;
    cout<<hobj.a<<endl;
    cout<<hobj.b<<endl;
    cout<<hobj.c<<endl;

    hobj.fun();
    hobj.gun();

    return 0;
}
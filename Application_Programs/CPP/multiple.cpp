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


class Hello
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

class JSM : public Demo, public Hello
{
    
   public:
            int P;

    JSM()
    {
        cout<<"3. Inside the JSM Constructor"<<endl;
        P = 60;
    }

    ~JSM()
    {
        cout<<"Inside the JSM Destructor"<<endl;
    }

    void sun()
    {
        cout<<"Inside the sun of JSM"<<endl;
    }
};

int main()
{
    JSM jsmobj;
    Hello hobj;
    
    cout<<sizeof(jsmobj)<<"bytes"<<endl; // 20 bytes

    cout<<jsmobj.x<<endl;
    cout<<jsmobj.y<<endl;
    cout<<jsmobj.a<<endl;
    cout<<jsmobj.b<<endl;
    cout<<jsmobj.c<<endl;
    cout<<jsmobj.P<<endl;

    jsmobj.fun();
    jsmobj.gun();
    jsmobj.sun();

    return 0;
}
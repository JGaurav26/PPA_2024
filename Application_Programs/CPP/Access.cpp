#include<iostream>
using namespace std;

class Demo
{
    int i; // default access specifier is private for i

    public:
            int j;

    private:
            int k;

    protected:
            int a;

    public:
            Demo()
            {
                i = 10;
                j = 20;
                k = 30;
                a = 40;
            }

            void Display()
            {
                cout<<"Value of i : "<<i<<endl;
                cout<<"Value of j : "<<j<<endl;
                cout<<"Value of k : "<<k<<endl;
                cout<<"Value of a : "<<a<<endl;
            }
};

int main()
{
    Demo obj;
    // cout<<"Value of i:- "<<obj.i<<endl;  --> NOT ALLOWED
        cout<<"Value of j:- "<<obj.j<<endl; // --> ALLOWED
    // cout<<"Value of k:- "<<obj.k<<endl; --> NOT ALLOWED
    // cout<<"Value of a:- "<<obj.a<<endl; --> NOT ALLOWED

    return 0;
}
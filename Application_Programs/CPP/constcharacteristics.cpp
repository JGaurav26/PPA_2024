#include<iostream>
using namespace std;

class Demo
{
    public:
            int i;
            // const int j = 10; // ADDED IN C++ 11
            // const int k = 20; // ADDED IN C++ 11

            const int j;
            const int k;
            
            Demo(int a, int b, int c) : j(b),k(c)
            {
                i = a;
                // j = b;
                // k = c;
            }
};

int main()
{
    // Demo obj;

    Demo obj1 (10,20,30);
    cout<<"obj1.i"<<obj1.i<<endl;
    cout<<"obj1.j"<<obj1.j<<endl;
    cout<<"obj1.k"<<obj1.k<<endl;
    return 0;
}
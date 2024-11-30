#include<iostream>
using namespace std;

class Parent
{
    public:
            int i,j,k;


            void fun()
            {
                cout<<"Inside Parent Function"<<endl;
            }
};

class Child : public Parent
{
    public:
            int a,b;

    void gun()
    {
        cout<<"Inside child gun"<<endl;
    }
};

int main()
{
    Parent parentobj; // 12 bytes
    Child childobj; // 20 bytes

    cout<<"Size of parent obj"<<sizeof(parentobj);
    cout<<"Size of parent obj"<<sizeof(childobj);

    parentobj.fun();
    childobj.fun();
    childobj.gun();

    return 0;
}
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
    Parent *parentptr = new Parent; // No Casting
    Child *childptr = new Child; // No Casting

    Parent *parentptr2 = new Child; // Up Casting

   //  Child *childptr2 = new Parent; // Down Casting

    return 0;
}
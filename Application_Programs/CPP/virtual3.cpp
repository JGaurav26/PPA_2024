#include<iostream>
using namespace std;

class Parent
{
    public:
            int i,j,k;


            void fun()
            {
                cout<<"Inside Parent fun"<<endl;
            }

            void gun()
            {
                cout<<"Inside Parent gun"<<endl;
            }

            void sun()
            {
                cout<<"Inside Parent sun"<<endl;
            }

            void run()
            {
                cout<<"Inside Parent run"<<endl;
            }
};

class Child : public Parent
{
    public:
            int a,b;

    void gun() // redefinition
    {
        cout<<"Inside child gun"<<endl;
    }

    void run() // redefinition
            {
                cout<<"Inside Child run"<<endl;
            }
};

int main()
{
    Parent *ptr = new Child; // Up-Casting
    ptr -> fun();
    ptr -> gun();
    ptr -> sun();
    ptr -> run();


    return 0;
}
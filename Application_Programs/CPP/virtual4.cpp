#include<iostream>
using namespace std;

class Parent
{
    public:
            int i,j,k;


            virtual void fun()
            {
                cout<<"Inside Parent fun"<<endl;
            }

            virtual void gun()
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

    virtual void gun() // redefinition
    {
        cout<<"Inside child gun"<<endl;
    }

    void run() // redefinition
            {
                cout<<"Inside Child run"<<endl;
            }

           virtual void mun()
            {
                cout<<"Inside Child mun";
            }
};

int main()
{
    cout<<"size of Parent"<<sizeof(Parent)<<endl;;
    cout<<"size of Child"<<sizeof(Child)<<endl;;
    

    Parent *ptr = new Child; // Up-Casting
    ptr -> fun();
    ptr -> gun();
    ptr -> sun();
    ptr -> run();

    

    return 0;
}
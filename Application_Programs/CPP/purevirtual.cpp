#include<iostream>
using namespace std;

class Parent
{
    public:

    int i,j,k;

    void fun() //1000........... // CONCRETE METHOD // METHOD WITH BODY
    {
        cout<<"Parent fun()"<<endl;
    }

    virtual void gun()
    {
        cout<<"Parent gun()"<<endl; //2000
    }

    // METHOD WITHOUT BODY
    // PURE VIRTUAL FUNCTION
    virtual int Addition(int no1,int no2) = 0; // ABSTRACT METHOD

};

class Child : public Parent
{
    public:
            int a,b;

            void gun() // 4000
            {
                cout<<"Child gun()"<<endl;
            }

            virtual void sun() // 5000
            {
                cout<<"Child sun()"<<endl;
            }

            int Addition(int no1, int no2) // 6000
            {
                return no1 + no2;
            }
};

int main()
{
    // Parent pobj ; // COMPILATION ERROR VTABLE CONTAINS BLANK ENTRY FOR ABSTRACT METHOD
    Parent *ptr = new Child;
    ptr -> fun();
    ptr -> gun();

    int ret = 0;
    ret = ptr -> Addition(10,20);
    cout<<"Addition is:- "<<ret<<endl;
}
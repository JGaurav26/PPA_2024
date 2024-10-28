#include<iostream>
using namespace std;

class Demo
{
    public:
            int i;
            int j;

    void fun()
    {
        cout<<"inside fun of Demo Class \n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i = 10;
    obj1.j = 20;

    obj2.i = 30;
    obj2.j = 40;

    obj1.fun();
    obj2.fun();

    return 0;

}
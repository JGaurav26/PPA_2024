#include<iostream>
using namespace std;
class Demo
{

    public: 
        int i;
        int j;
        
    Demo()
    {
        cout<<"inside default constructor \n";
    }

    Demo(int A, int B)
    {
        i = A;
        j = B;
        cout<<"inside parametrized constructor \n";
    }

    Demo(Demo &ref)
    {
        i = ref.i;
        j = ref.j;
        cout<<"inside copy constructor \n";
    }

    ~Demo()
    {
        cout<<"inside destructor \n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2 (11,22);
    Demo obj3(obj2);
}
#include<iostream>
using namespace std;

class Demo
{
    public:
            int i,j;
            
            Demo(int a = 10, int b = 20)
            {
                i = a;
                j = b;
            }

            Demo operator + (Demo op2)
            {
                return Demo(this -> i + op2.i, this -> j + op2.j);
            }
};

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);
    Demo obj3(0,0);

    obj3 = obj1 + obj2;

    cout<<"obj3.i:- "<<obj3.i<<endl;
    cout<<"obj3.j:- "<<obj3.j<<endl;

    return 0;
}
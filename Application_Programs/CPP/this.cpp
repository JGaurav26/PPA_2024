#include<iostream>
using namespace std;

class Demo
{
    public:
            int i;
            int j;
            int k;
            
    Demo(int a = 10, int b = 20, int c = 30)
    {
        cout<<"value of this is :- "<<this<<endl;
        this ->i = a;
        this ->j = b;
        this ->k = c;
    }

    void fun(int No1, int No2)
    {
        cout<<"inside fun :-"<<endl;
        cout<<"value of i:- "<<this->i<<endl;
        cout<<"value of j:- "<<this->j<<endl;
        cout<<"value of k:- "<<this->k<<endl;
    }

    void display()
    {
        cout<<"inside display :- "<<endl;
        cout<<"value of this pointer is:- "<<this<<endl;
    }
};

int main()
{
    Demo obj1;
    Demo obj2(40,50,60);
    obj1.fun(5,6);
    obj2.fun(8,9);

    cout<<"Address of obj1:- "<<&obj1<<endl;
    obj1.display();

    cout<<"Address of obj2:- "<<&obj2<<endl;
    obj2.display();

    return 0;
}
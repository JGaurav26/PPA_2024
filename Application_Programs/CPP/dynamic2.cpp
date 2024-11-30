#include<iostream>
using namespace std;

class Demo
{
    public:
            int i,j,k;

    Demo()
    {
        cout<<"Inside Constructor"<<endl;
    }

    ~Demo()
    {
        cout<<"Inside Destructor"<<endl;
    }

    void display()
    {
        cout<<"Inside Display"<<endl;
    }
};

int main()
{
    Demo obj; // STATIC MEMORY ALLOCATION FOR THE OBJECT
    obj.display();

    Demo *ptr = new Demo; // DYNAMICALLY MEMORY ALLOCATED FOR THE OBJECT
    // Demo *ptr = (Demo *)melloc(sizeof(Demo))
    ptr -> i = 10;
    ptr -> display();

    delete ptr; // free(ptr)

    return 0;
}